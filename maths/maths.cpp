#include<bits/stdc++.h>
using namespace std;
// % = remainder and / = quotient 

// coutning  digits 
// int main(){
//    int n;
//    cout << "Enter a number : ";
//    cin >> n ;
//    int digit = 0;
//    while(n > 0 ){
//     digit ++;
//     n = n/10;
//     /* or log(n)  base 10 + 1*/
//    }
//    cout << "The number of digits  are " << digit;
//     return 0;
// }


// reverse a number
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n ;
    cout << "You have entered : " << n << endl;
    int revno = 0;
    while(n>0){
        int lastdigit = n % 10;
        revno = (revno* 10) + lastdigit;
      n = n/10;
   
    }
   cout << "Reversed number is : " << revno ;
    return 0;
}
/*better solution to look for negative and overflow and underflow conditions 
class Solution {
public:
    int reverse(int x) {
        int n =x;
        int revno = 0;
        while(n != 0){
            int lastdigit = n % 10;
            n = n/10;
            if (revno > INT_MAX / 10 || (revno == INT_MAX / 10 && lastdigit > 7))
                return 0;
            if (revno < INT_MIN / 10 || (revno == INT_MIN / 10 && lastdigit < -8))
                return 0;
            revno = revno * 10 + lastdigit;
            
        }
        return revno;
    }
};
*/



// int main(){
//     int n;
//      cout << "Enter a number : ";
//      cin >> n ;
//    cout << "You have entered : " << n << endl;
//    int revno = 0;
//    int original = n;
//     while(n>0){
//         int lastdigit = n % 10;
//         revno = (revno* 10) + lastdigit;
//       n = n/10;
//     }
//     if(original == revno){
//         cout << "Palindrome ";
//     }
//     else{
//         cout << "Not a palindrome";
//     }
//     return 0;
// }


// armstrong number 
// int main(){
//         int n;
//      cout << "Enter a number : ";
//      cin >> n ;
//    cout << "You have entered : " << n << endl;
//    int original = n;
//    int sum = 0;
//    while (n > 0)
//    {
//     int lastdigit = n % 10;
//     sum = sum + (lastdigit* lastdigit* lastdigit);
//     n  = n/10;
//    }
//        if(original == sum){
//         cout << "is armstrong ";
//     }
//     else{
//         cout << "Not a armstrong ";
// }
//     return 0;
// }


// all divisors
// int main(){
//         int n;
//      cout << "Enter a number : ";
//      cin >> n ;
//      cout << "The divisors are : " << endl;
//      for (int i = 1; i <= n; i++) // or i <= sqrt(n)
//      {
//         if(n % i == 0 ){
//             cout << i << " ";
//         }
//      }

//     return 0;
// }



// gcd/hcf 
// int main(){
//         int n1 , n2;
//      cout << "Enter 2 numbers : ";
//      cin >> n1 >> n2 ;
//      int gcd = 1;
//     //  for (int i = 1; i <= min(n1,n2); i++) 
//     //  {
//     //     if(n1 % i == 0 && n2 % i == 0  ){
//     //         gcd = i;
//     //     }
//     //  } or 
//     for (int i = min(n1,n2); i >= 0; i--)
//     {
//                 if(n1 % i == 0 && n2 % i == 0  ){
//             cout << i;
//             break;
//         }
//     }

//     return 0;
// }


// Euclidean algorithm = gcd (n1,n2) == gcd (n1-n2,n2) given n1>n2
// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2;
//     cout << "Enter 2 numbers : ";
//     cin >> n1 >> n2;

//     int a = n1, b = n2; // keeping original for clarity

//     while (a > 0 && b > 0) {
//         if (a > b)
//             a = a % b;
//         else
//             b = b % a;
//     }

//     if (a == 0)
//         cout << "GCD = " << b << endl;
//     else
//         cout << "GCD = " << a << endl;

//     return 0;
// }
