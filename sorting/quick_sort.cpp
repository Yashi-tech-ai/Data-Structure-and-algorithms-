#include<bits/stdc++.h>
using namespace std;
int partition(vector <int> &arr,int low,int high ){
    
}
vector <int> quick_sort(vector <int> &arr, int low , int high){
    if(low < high){
        int pindex = partition(arr,low,high);
        quick_sort(arr,low,pindex-1);
        quick_sort(arr,pindex + 1, high);
    }

}
int main(){
    int n ;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick_sort(arr,0,n-1);
    for (int x : arr) // for (datatype variable : container)
    {
        cout << x << " ";
    }
    return 0;
}