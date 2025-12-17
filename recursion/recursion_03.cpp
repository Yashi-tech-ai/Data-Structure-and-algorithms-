// reversing an array using recursion 
#include<bits/stdc++.h>
using namespace std;
// void reverse_array(int arr[],int i,int n){
//    if(i >= n/2){
//     return ;
//    }
//    swap(arr[i],arr[n-i-1]);
//    reverse_array( arr,i +1 , n);
   
// }
// int main(){
//     int n;
//     cin >> n ;
//     int arr[n];
//     cout << "Enter array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse_array(arr,0,n);
//     cout << " The reverse array : - ";
//     for (int i = 0; i < n; i++)
//    {
//       cout << arr[i] << " " ;
//    }
//     return 0;
// }


bool isPalindrome(int i, string &s) {
    if (i >= s.length() / 2) {
        return true;
    }
    if (s[i] != s[s.length() - i - 1]) {
        return false;
    }
    return isPalindrome(i + 1, s);
}


int main() {
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s);

    if (isPalindrome(0, s)) {
        cout << "Palindrome " << endl;
    } else {
        cout << "Not a Palindrome " << endl;
    }
    return 0;
}
