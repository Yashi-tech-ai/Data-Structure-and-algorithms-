#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int original = n;
    int sum = 0;
    while(n > 0){
        int lastdigit = n % 10;
        sum = sum + (lastdigit* lastdigit* lastdigit);
        n= n/10;
    }
    if(original == sum){
        cout << "is armstrong ";
    }
    else{
        cout << "Not a armstrong ";
}
    return 0;
}