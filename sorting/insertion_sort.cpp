#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting :- 
    for (int i = 0; i < n; i++)
    {  int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
              swap(arr[j],arr[j-1]);
              j--;
        }
    }

    // printing :-
    cout << "sorted array after :  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}