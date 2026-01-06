#include<bits/stdc++.h>
using namespace std;
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