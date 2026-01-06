#include<bits/stdc++.h>
using namespace std;
int partition(vector <int> &arr,int low,int high ){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<= pivot && i <=high -1){
            i++;
        }
        while(arr[j]  > pivot && j >= low +1 ){
            j--;
        }
        /* //for descending            
            while (arr[i]>=pivot && i<high){
                 i++;
             }
             while (arr[j]<pivot && j>low){
                 j--;
             }
        */
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
        swap(arr[low],arr[j]);
        return j;
}
void quick_sort(vector <int> &arr, int low , int high){
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