#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout << "Enter a number between 1- 7 to check the day ";
    cin >> x;
    switch(x){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        default:
        cout << "Invalid input";
        
    }
    return 0;
}