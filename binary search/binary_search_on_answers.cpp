#include<bits/stdc++.h>
using namespace std;

// Find square root of a number 
// can use in-build function 
// brute = do a linear search from 0 to .. and check by doing n x n and return the exact or closest floor value 
// optimal = by binary search 
int floorsqrt(vector<int> &arr){
    int n = arr.size();
    int low = 0; int high = n /2;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = (mid * mid);
        if(val <= n){
            low = mid  +1;

        }
        else high = mid - 1;
    }
    return high ;
}

// Finding nth root of an integer