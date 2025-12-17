#include<bits/stdc++.h>
using namespace std;


// parameterized way 
// void sumofnumbers(int i, int sum){
 
//     if(i < 1){
//         cout << sum << endl;
//         return;
//     }
//     sumofnumbers(i-1,sum+i);
    
     
// }
// int main(){
//     sumofnumbers(5,0);
//     return 0;
// }


// functional way 
// int sum_of_n(int n){
//     if(n == 0){
//         return 0 ;
//     }
//     return n + sum_of_n(n - 1);
// }
// int main(){
//    cout << sum_of_n(5);
   
//     return 0;
// }



// functional way to determine factorial of a number 
// int factorial(int n){
//     if(n == 0){
//         return 1 ;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//    cout << factorial(4);
   
//     return 0;
// }



// parameterized way to determine factorial 
void factorial_of_number(int i , int factorial){
    if(i == 0){
        cout << factorial << endl;
        return ;
    }
    factorial_of_number(i-1, factorial* i);
}
int main(){
    factorial_of_number(4,1);
    return 0;
}

