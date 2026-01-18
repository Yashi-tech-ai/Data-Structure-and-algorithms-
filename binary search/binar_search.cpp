#include<bits/stdc++.h>
using namespace std;
/*binary search = a mid is chosen and then the number to be find is compared from mid and then goes left or right depending upon the comparison
works only for sorted arrays */

int main(){
    vector <int> arr = {2,3,4,5,6,7};
   int n = arr.size();
   int nums = 5;
    int low = 0; int high = n-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(nums == arr[mid]) return mid;
        else if (nums < mid) high = mid -1;
        else low = mid +1;
    }
     // recursive approach 
     
    return 0;
}