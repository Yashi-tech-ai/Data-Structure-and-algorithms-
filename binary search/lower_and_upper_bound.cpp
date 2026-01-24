// lower bound = smallest index such that the number at that index is greater than or equal to the given number considering the array is sorted 
// if no element possible then its the hypothetical index right after the last index 
// implementation by binary search = TC = O(log N {base 2})

// lb = lower_bound(arr.begin(),array.end(),n) -  array.begin();
#include<bits/stdc++.h>
using namespace std;
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
int main(){
    vector<int> arr = { 23, 45, 56, 78, 89 };
   cout <<  lowerbound(arr,5,79);
    return 0;
}