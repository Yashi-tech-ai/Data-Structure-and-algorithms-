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













int main(){
    vector <int> arr = {12,34,56,67,67,67,89};
    int x = 67; int n = arr.size();
int lb = lowerbound(arr,n,x);
if(lb == n || arr[lb]!= x) return {-1};
int ub = upperbound(arr,n,x);

return 0;
}