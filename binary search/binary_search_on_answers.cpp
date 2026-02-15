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



// Finding nth root of an integer = 3rd root of 27 = 3 
//brute = linear search 
int nrootofm(int k, int m){
    int low = 1; int high = m;
    while (low <= high)
    {  long long val = 1;
        int mid = (low + high) / 2;
        for (int i = 0; i < k; i++)
        {
             val *= mid;
             if(val > m) break; 
        }
        if(val == m){
            return mid;
        }
        else if(val < m){
            low = mid +1; 
        }
        else high = mid -1;

    }
    return -1;
}

// approach 2 to the code 
long long power(int base, int exp, int limit) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
        if (result > limit) return result; // overflow condition for very large numbers
    }
    return result;
}
int nrootofm(int k, int m) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        long long val = power(mid, k, m);

        if (val == m) return mid;
        else if (val < m) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    cout << nrootofm(3,27);
}