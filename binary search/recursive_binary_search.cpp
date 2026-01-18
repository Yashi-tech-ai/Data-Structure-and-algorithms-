#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> a ,int low , int high , int target){
    if(low>high) return -1;
    int mid = (low + high)/2;
    if((a[mid] < target)){
        bs(a,mid+1,high,target);
    }
    else if(a[mid] > target){
        bs(a,low,high - 1, target);
    }
    else if(a[mid] == target){
        return mid;
    }
    else cout << " Not found";
}

int main(){
   vector <int> a = { 2,45, 67, 89, 100};
   cout << bs(a,0,4,89);
}