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

// leetcode problem 189 
// shift all the elements in left and create a temp = arr[0] for first index = for shifitng by 1 place 
// for shifting by K places 
/* brute method = O(n+d)
 d= d% n
 int temp[d];
 for(int i = 0; i < d;i++){
 temp[i] = arr[i];
 }
  for(int i = d; i < n;i++){
  arr[i-d] = arr[i];
 }
   for(int i = n- d; i < n;i++){
   arr[i] = temp[n-(i-d)];
 }
*/

// optimal / better = O(2n)
// reverse(a , a+d) then reverse reverse (a+d ,n) then reverse the whole array (a,a+n)
// for reversing right = 

// reverse(a,a+n)
// reverse(a,a+k)
// reverse(a+k,a+n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int d = n -k;
        reverse(nums.begin(),nums.begin()+ d);
        reverse(nums.begin() + d,nums.end());
        reverse(nums.begin() , nums.end());
        
    }
};

// leetcode 283 = move all zeros at last of an array 
// brute = check if element is 0 and then put them into temp array and then put them back in original array O(2n) and sc = O(N)
// optimal = j will check for 0 and i for non zero and then swap with each other = O(N) no extra space 

// leetcode = 268 
// brute = nested loops and if (a[j] == i) okay but if not then cout i 
// TC = O(n^2 ) 
// better = using hashing 
// TC = O(2N) and SC = O(N)
// optimal(1) = expected sum - actual sum { TC = O(N) ad sc = O(1)}
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int n_sum = (n*(n+1)/2);
       int sum = 0;
       for(int i = 0;i < n;i++){
        sum += nums[i];
       }
       int missing = n_sum - sum;
       return missing;
    }
};
// optimal(2) = XOR => a^a = 0{same complexities}
/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0; int xor2 = 0;
        for(int i = 0; i < n-1;i++){
            xor2 = xor2^nums[i];
            xor1 = xor1^nums[i+1];
        }
        xor1 = xor1^n;
        return xor1^xor2;
    }
};*/


// leetcode 485
// brute = count and incremenet and then compare {tc = O(N)}
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0; 
        int cnt = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 1){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else cnt = 0;
        }

        return maxi;
    }
};

// leetcode 136
// brute = linear search 
// better = hashing {O(3N) but what if they have negtives as well so we use map so {Tc = O(n/2 + 1) as every element appear twice }}
// optimal = Xor {TC = O(N)}
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i = 0;i < nums.size();i++){
            xor1 = xor1^nums[i];
        }
        return xor1;
    }
};
int main(){
   int arr[5] = {3,2,1,5,2};
   cout << seclargest(arr,5);
  return 0;
}