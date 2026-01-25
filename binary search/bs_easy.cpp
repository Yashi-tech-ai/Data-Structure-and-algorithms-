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
int main(){
    vector <int> arr = {12,34,56,67,67,67,89};
    int x = 67; int n = arr.size();
int lb = lowerbound(arr,n,x);
if(lb == n || arr[lb]!= x) return {-1};
int ub = upperbound(arr,n,x);

return 0;
}