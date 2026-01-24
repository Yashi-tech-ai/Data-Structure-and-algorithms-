#include<bits/stdc++.h>
using namespace std;
// leetcode = 1 {two sum problem}
// brute force = pick one element and check with others one by one = O(N^2)
// better = by hashing and using hashmap = {o(n x log n) = log n is for map}
string read(int n , vector<int> a , int target){
  map<int,int> mpp;
  for (int i = 0; i < n; i++)
  {
    int b = a[i];
    int more = target - b;
    if(mpp.find(more) != mpp.end()){
            return " yes"; // return {mpp[more],i}; // to return indexes
    }
    mpp[b] =  i;
  }
  return "No";
  
}
// optimal = we sort the array and then take two pointers i and j at 0 and n index and if the sum(i+j) is less than target then increase the 
// i the index by one and vice versa but this is for yes or no based question 
// for indexes to be told we will first store the array in some data structure with original indexes.
// tc = O(N) + O(N log N)-> for sorting
string read(int n , vector<int> a , int target){
   int left = 0; int right = n-1;
   sort(a.begin(), a.end());
   while(left < right){
    int sum = a[left] + a[right];
    if(sum == target){
        return "yes";
    }
    else if(sum < target){
        left++;
    }
    else right--;

   }
  return "NO";
} 


// leetcode = 75 {sort 1s,2s and 3s}
// brute = sort using merge or quick sort
// better = count the number and increase then by for loop print them all uptill the count = {O(N)}
// optimal = 