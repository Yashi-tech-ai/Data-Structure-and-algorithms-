#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout << "Enter your age : ";
    cin >> x;
    if(x <18){
        cout << ("You are not an adult ");
    }
    else if(x == 18){
        cout << "You are 18 ";
    }
    else{
        cout << "You are an adult ";
    }
    return 0;
}