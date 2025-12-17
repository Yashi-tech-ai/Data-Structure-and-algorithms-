#include<bits/stdc++.h>
using namespace std;
// pass by value 
// void dosomething(int n){
//     cout << n << endl;
//     n = n + 5;
//     cout << n << endl;
//     n = n + 5;
//     cout << n << endl;
// }
// int main(){
//     int n; // in here it sends a copy of this number to the function above such that the value of n does not change here in int main
//     cout << "Enter a number : ";
//     cin >> n;
//     dosomething(n);
//     cout << n << endl;
//     return 0;

// }



// pass by reference = it takes the address of the original and sends it 
// array will always go through reference .
void dosomething(string &sh){
    sh[1] = 'o';
    cout << sh << endl;

}
int main(){
   string sh;
   cout << "Enter a string ";
   getline(cin,sh);
   dosomething(sh);// such that original gets changed 
   cout << sh << endl;
    return 0;

}