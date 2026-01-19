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
// i the index by one and vice versa
