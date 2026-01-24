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