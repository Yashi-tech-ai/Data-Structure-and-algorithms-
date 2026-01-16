#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {23, 56, 1, 8,9 ,3};
    int n = arr.size();
    int element = 8;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i] == element){
            cout << 8 << " is at " << i << " index";
            break;
        }
    }
    

}