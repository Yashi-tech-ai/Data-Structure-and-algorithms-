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
// optimal = O(N)  and sc = O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0; int high = n-1; int mid = 0;
        while(mid <= high){
            if(nums[mid]== 0){
                 swap(nums[low],nums[mid]);
                 low++;
                 mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};

// leetcode = 169 {majority element}
// brute = pick the first element and then check through the entire array . = {o(n^2)}
//  better = hashing and using hashmap and then iterate in it = {tc= O(N log N) + O(N) and sc = O(N)}
int majorityelelement(vector <int> v){
  map<int,int> mpp;
 int n = v.size();
  for (int i = 0; i < n; i++)
  {
    mpp[v[i]]++;
  }
  for(auto it: mpp){
    if(it.second > n/2){
      return it.first;
    }
  }
  return -1;
}

// moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el;
        for(int i = 0; i < nums.size();i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == el) cnt1++;
        }
        if(cnt1 > nums.size() / 2){
            return el;
        }
        return -1;
    }
};


// leetcode = 121 {Buy and sell stock }
// in the given array buy(minimum price) will come first then sell so maximize the profit 
// we keep a track of profit and increment .
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxprofit = 0;
        int n = prices.size();
        for(int i = 0;i < n; i++){
            int cost = prices[i] - mini;
            maxprofit = max(maxprofit, cost);
            mini = min(mini,prices[i]);
        }
        return maxprofit;
    }
};


// leetcode = 2149 {rearrange according to sign}
// brute = take two arrays positive and negative and iterate through orignal array and assign values in the new array = {TC = O(2N) and SC = O(N)}
// *** {on observation by this method we see that the positive numbers come at even indexes}
// optimal =  approach 2 by creating a new array and checking side by side from original array and assigning number based on *** condition = {TC = O(N+N/2) and SC = O(N)}
vector <int> rearrangearray(vector<int> &arr){
  int n = arr.size();
  vector<int> ans(n,0);
  int posindex = 0 ; int negindex = 1;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] < 0){
        ans[negindex] = arr[i];
        negindex +- 2;
    }
    else{
     ans[posindex] = arr[i];
     posindex += 2;

    }
  }
  return ans;
  
}

// variety 2 = when elements left (i.e if not equal number of positives and negatives) to add the remaining numbers with order = {TC = O(2N) and SC = O(N)}
vector<int> alternatenumbers(vector<int> &nums){
  vector<int> pos, neg;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if(nums[i] > 0){
        pos.push_back(nums[i]);
    }
    else{
        neg.push_back(nums[i]);
    }
  }
  if(pos.size() > neg.size()){
    for (int i = 0; i < neg.size(); i++)
    {
        nums[2*i] = pos[i];
        nums[2*i+1] = neg[i];
    }
    int index = neg.size() * 2;
    for (int i = neg.size(); i < pos.size(); i++)
    {
        nums[index] = pos[i];
        index++; 
    }
    
  }
  else{
    for (int i = 0; i < pos.size(); i++)
    {
        nums[2*i] = pos[i];
        nums[2*i+1] = neg[i];
    }
    int index = pos.size() * 2;
    for (int i = pos.size(); i < neg.size(); i++)
    {
        nums[index] = neg[i];
        index++; 
    }
  }
  return nums;
}



// leetcode = 31 {Next permutations} = in sorted order and then the original number will be found and the next permutation will be returned 
// brute = generate all the possible permuatation through recursion and then do a linear search = O(n!)
// better = already built in stl in c++ 
vector<int> nextgreaterpermutation(vector<int> &arr){
   next_permutation(arr.begin(),arr.end());
   return arr;
}
// optimal = first find a break through point then find the number just bigger than that index and then reverse the right array from indec = {O(3N)}
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
           reverse(nums.begin(),nums.end());
           return ;
        }
        for(int i = n-1;i > ind ;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ ind + 1, nums.end());
    }
};



// Leader in an array problem (the number in the array such that right of the numbers of this index are smaller than the number)
// brute = take one index and do linear search = {O(N^2)}
// optimal = iterate from back and consider an index max which will be initially the last index and then check from back for comparision = {TC = O(N) and SC = O(N)}
vector <int> leaderinarray(vector<int> &arr){

    vector <int> ans;
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = n -1 ; i >= 0; i--)
    {
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }

    return ans;
}


// Leetcode = 128 {Longest consecutive sequence }
// brute = pick one element and then look for +1, +2 and keep a count = {O(N^3)}
// better = sort and keep a variable for INT_MIN so that no repititon of duplicates appear and then  keep a count 
/*  count = 0 , longest = 1, prev_smallest = INT_MIN
for(i = 0 to n ){
  if(arr[i] - 1 == prev_smaller){
    count = count + 1
    prev_smaller = arr[i]}
    else if (arr[i] != prev_smaller){
    count = 1
    prev_smaller = arr[i]
    }
   longest = max(longest,count)
  }
*/

// optimal = by using unordered set (removes duplicates and has O(1) lookup) = {TC = O(N + 2N = 3N) and SC = {O(N)}}
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i = 0;i <n;i++){
            st.insert(nums[i]);
        }

        for(auto it:st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x = x+1;
                    cnt = cnt +1;

                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};


// leetcode = 73 {set matrix zero } = as soon as a zero is found in matric the whole corresponding row and coloumn becomes zero
// brute = we iteratre through the matrix and mark the element of corresponding row and column as -1 rather than 0 cause in next iteration 
// it may also consider a zero due to previous one and damage the original matrix and then we can by doing one more iteration convert all 
// - 1s into 0  = {TC = O(N^3)}

