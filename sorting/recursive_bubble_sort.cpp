#include<bits/stdc++.h>
using namespace std;
void recbubble_sort(vector <int> &arr, int n){
    // base case 
    if(n == 1) return;

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    recbubble_sort(arr,n-1);
    
}
int main(){
    vector<int> arr = {23, 78 ,1, 100 ,3};
    int n = arr.size();
    recbubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}