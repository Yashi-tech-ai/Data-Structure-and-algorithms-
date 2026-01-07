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

// leetcode problem 26
// brute = take a set since it unique and keep on inserting in it and then put the index from set back in the array
// optimal = start from first index and then check if any other number is different than it (2 pointer problem)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int j = 1;j < n;j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];

            }
        }
        return i+1;
    }
};


int main(){
   int arr[5] = {3,2,1,5,2};
   cout << seclargest(arr,5);
  return 0;
}