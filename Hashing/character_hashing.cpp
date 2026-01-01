/* char - 'a ' = for lower case string only 
considering the ASCII values for each character */

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ; 
    cout << "Enter the letters : ";
    cin >> s;
   
    // precompute 
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }
    

    // fetch 
    char c;
    cout << "Enter the letter to be found " << endl ;
   cin >> c;
   cout <<  "letter " << c << " appaers " << hash[c - 'a'];


    return 0;
}

// if upper case also included :- 
/*
int main(){
    string s ; 
    cout << "Enter the letters : ";
    cin >> s;
   
    // precompute 
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }
    

    // fetch 
    char c;
    cout << "Enter the letter to be found " << endl ;
   cin >> c;
   cout <<  "letter " << c << " appaers " << hash[c];


    return 0;
}

*/
