#include<bits/stdc++.h>
using namespace std;
// repitition is allowed 
// brute - take a elemnent from one array and check for it in the other one using nested loop 
//Tc = O(n1 xn2) and sc = O(n2)
int main(){
vector<int> a = { 1, 2, 3,4,6 ,8}; 
vector<int> b = { 2,2,2, 5, 8, 90};
vector<int> c;
int n1 = a.size();
int n2 = b.size();
int i = 0;
int j = 0;
while(i < n1 && j < n2){
    if(a[i] == b[j]){
        c.push_back(a[i]);
        i++;
        j++;
    }
    else if(a[i] > b[j]){
        j++;
    }
    else{
        i++;
    }
}
for(auto it : c){
    cout << it << " ";
}
    return 0;
}