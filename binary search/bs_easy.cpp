#include<bits/stdc++.h>
using namespace std;

// leetcode = 35
// lower bound 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2; // safer to avoid overflow
            if(nums[mid] == target) {
                return mid; // found target
            } else if(nums[mid] < target) {
                low = mid + 1; // go right
            } else {
                high = mid - 1; // go left
            }
        }

        // If not found, 'low' is the correct insert position
        return low;
    }
};

// Floor and ciel problem = {floor = largest number less than x and ciel = smallest number greater than x}
int floor(vector<int> arr, int x){
    int ans = -1;
    int low = 0 ; int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid+1;
        }
        else high = mid -1;
    }
    return ans;
}

// leetcode = 34 {first and last occurence of the element }
// brute = linear search through the array O(N)
// better = using lower and upper bound - 1 {but if the element is not present in the array } = { TC = O(2log N (base 2))}
int lowerbound(vector<int> a, int n , int x){
  int low = 0; int high = n-1;
  int ans = n ;
  while(low < high){
    int mid = (low + high) / 2;
    if(a[mid] >= x){
        ans = mid;
        high = mid -1;
    }
   else {
    low = mid + 1;
   }
   return ans;
}
}

int upperbound(vector<int> a, int n , int x){
  int low = 0; int high = n-1;
  int ans = n ;
  while(low < high){
    int mid = (low + high) / 2;
    if(a[mid] > x){
        ans = mid;
        high = mid -1;
    }
   else {
    low = mid + 1;
   }
   return ans;
}
}

// optimal = just by using binary search 
int firstreccurence(vector<int> &arr,int n , int k){
    int low = 0; int high = n - 1;
    int first = -1;
    while (low <= high)
    {
       int mid = (low+high)/ 2;
       if(arr[mid] == k){
        first = mid;
        high = mid-1;
       }
       else if(arr[mid] < k){
        low = mid + 1;

       }
       else high = mid - 1;
    }
    return first;
}
int lastreccurence(vector<int> &arr,int n , int k){
    int low = 0; int high = n - 1;
    int last  = -1;
    while (low <= high)
    {
       int mid = (low+high)/ 2;
       if(arr[mid] == k){
        last = mid;
        low = mid + 1;
       }
       else if(arr[mid] < k){
        low = mid + 1;

       }
       else high = mid - 1;
    }
    return last;
}

pair<int,int> occurence(vector<int> &arr, int n , int k){
    int first = firstreccurence(arr,n,k);
    if(first == -1) return {-1,-1};
    int last = lastreccurence(arr,n,k);
    return {first, last};
}
// to count occurences of the number :-
int count(vector<int> &arr, int n , int x){
    pair<int,int> ans = occurence(arr,n,x);
    if(ans.first == -1) return 0;
    return ans.second - ans.first + 1;
}



// leetcode = 33 {search in rotated sorted array (no duplicates)}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) return mid;

            // Check if left half is sorted
            if (nums[low] <= nums[mid]) {
                // Target is in the left sorted half
                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            } 
            // Right half must be sorted
            else {
                // Target is in the right sorted half
                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1; // target not found
    }
};

// leetcode = 81 {search in roated sorted array (with duplicates)}
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) return true;

            // When duplicates prevent us from knowing the sorted side
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            }
            // Left half is sorted
            else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return false; // target not found
    }
};

// leetcode = 153 {find minimum in rotated sorted array with no duplicates}
// use the appraoch used for search in rotated array and the first index of the sorted half will be the answer = {O(log N(base 2))}
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0; int high = n-1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low +high)/2 ;
            // if search space is sorted already then the nums[low] will always be the minimum 
            if(nums[low] <= nums[high]){
                ans = min(ans,nums[low]);
                break;
            }
            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid +1;
            }
            else{
                high = mid -1;
                ans = min(ans, nums[mid]);
            }
        }
      return ans;
    }
};



// Number of times an array has been rotated
// find the minimum in the rotated array and the index of it will be the answer 
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0; int high = n-1;
        int ans = INT_MAX;
        int index = -1;
        while(low <= high){
            int mid = (low +high)/2 ;
            // if search space is sorted already then the nums[low] will always be the minimum 
            if(nums[low] <= nums[high]){
                if(nums[low] < nums[high]){
                    index = low;
                    ans = nums[low];
                }
                break;
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] < ans){
                    index =low;
                    ans = nums[low];
                }
                low = mid +1;
            }
            else{
                high = mid -1;
                if(nums[mid] < ans){
                    index = mid;
                    ans = nums[mid];
                }
                ans = min(ans, nums[mid]);
            }
        }
      return index ;
    }


// leetcode 540 = Single element in an sorted array 
// brute = check element one by one and their left and right side , by XOR , by Map = {O(N)}
// optimal = by observation on left of the single element (even,odd) and right of the element (odd,even) this will help to eliminate
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 1; int high = n-2;
        while(low <= high){
            int mid = low + (high - low)/2 ;
            if(nums[mid]!= nums[mid +1] && nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            // we are in left 
            if((mid % 2 == 1) && nums[mid] == nums[mid -1] || (mid % 2 == 0) && nums[mid] == nums[mid + 1]){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return -1;

    }
};


// leetcode = 162 {finding peak element}
// brute = we check one by one element = {TC = O(N)}
//  better = we use binary search and keep on elementing the sides which don't have the answer , we also write conditions for edge cases = {TC = O(log N)}
// optimal = if the mid is on the increasing slope then elemenate left side and vice versa . when mid on valley is the edge case
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 1; int high = n-2;
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n -1] > nums[n-2]) return n-1;
        while(low <= high){
           int mid = (low + high) / 2;
           if(nums[mid] > nums[mid -1] && nums[mid] > nums[mid+1]){
            return mid;
           }
           else if(nums[mid] > nums[mid - 1]) low = mid + 1;
           else high = mid - 1;
        }
        return - 1; 
    }
};
















int main(){
    vector <int> arr = {12,34,56,67,67,67,89};
    int x = 67; int n = arr.size();
int lb = lowerbound(arr,n,x);
if(lb == n || arr[lb]!= x) return {-1};
int ub = upperbound(arr,n,x);

return 0;
}