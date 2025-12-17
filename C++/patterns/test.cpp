#include<bits/stdc++.h>
using namespace std;
   // space star space
void pattern8(int n){   
   for (int i = 0; i < n; i++)
   { // space 
    for (int j = 0; j < i; j++)
    {
        cout << " ";
    }
    //  star 
    for (int j = 1; j <= (2*n - i - 1 ) ; j++)
    {
        cout << "*";
    }
    //  space 
     for (int j = 0; j < i; j++)
    {
        cout << " ";
    }
    cout << endl;
   }
    
   } 
int main(){
    pattern8(5);
    return 0;
}