#include<bits/stdc++.h>
using namespace std;

// largest element in array 
// brute = sort then last element 
int largestelement(int arr[], int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest ;

}

// second largest without sorting 
int seclargest(int arr[], int n){
    int largest = arr[0];
    int seclarge = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){
            seclarge = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > seclarge){
            seclarge = arr[i];
        }
    }
    return seclarge ;   
}

// leetcode problem 1752
// if breaks that is the rotation appears more than once then the array is invalid according to the question .
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                breaks++;
            }
            if (breaks > 1) {
                return false;
            }
        }
        return true;
    }
};




int main(){
   int arr[5] = {3,2,1,5,2};
   cout << seclargest(arr,5);
  return 0;
}