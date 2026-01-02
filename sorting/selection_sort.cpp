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
    // sorting 
    for (int i = 0; i < n - 2; i++)
    {   int minind = i;
        for (int j = i; j < n- 1; j++)
        {
             
            if(arr[j] < arr[minind]){
                minind = j;
            }
        }
        int temp = arr[minind];
        arr[minind] = arr[i];
        arr[i] = temp;

        
    }
    cout << "sorted array after :  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}