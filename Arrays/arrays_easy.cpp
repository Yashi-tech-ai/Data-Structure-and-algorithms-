#include<bits/stdc++.h>
using namespace std;

// largest element in array 
// brute = sort then last element 
int largestelement(int arr[], int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest ;

}


int main(){
   int arr[5] = {3,2,1,5,2};
   cout << largestelement(arr,5);
  return 0;
}