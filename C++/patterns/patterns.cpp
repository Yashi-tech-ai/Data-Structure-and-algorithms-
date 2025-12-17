#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    
}
void pattern2(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}
void pattern3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
void pattern4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
}
void pattern5(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
            
        }
        cout << endl;
    }
    
}
void pattern6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j;
            
        }
        cout << endl;
    }
    
}
void pattern7(int n){
   // space star space
   
   for (int i = 1; i <= n; i++)
   { // space 
    for (int j = 1; j <= n - i; j++)
    {
        cout << " ";
    }
    //  star 
    for (int j = 1; j <= 2*i -1 ; j++)
    {
        cout << "*";
    }
    //  space 
     for (int j = 1; j <= n - i; j++)
    {
        cout << " ";
    }
    cout << endl;
   }
    
   } 
void pattern8(int n){
   // space star space
   
   for (int i = 1; i <= n; i++)
   { // space 
    for (int j = 1; j <= i; j++)
    {
        cout << " ";
    }
    //  star 
    for (int j = 1; j <= (2*n - (2*i + 1)) ; j++)
    {
        cout << "*";
    }
    //  space 
     for (int j = 1; j <= i; j++)
    {
        cout << " ";
    }
    cout << endl;
   }
    
   } 
void pattern9(int n){
    // upper triangle 
    for (int i = 1; i <= n; i++)
   { // space 
    for (int j = 1; j <= n - i; j++)
    {
        cout << " ";
    }
    //  star 
    for (int j = 1; j <= 2*i -1 ; j++)
    {
        cout << "*";
    }
    //  space 
     for (int j = 1; j <= n - i; j++)
    {
        cout << " ";
    }
    cout << endl;
   }
    // Lower triangle 
    for (int i = 1; i <= n; i++)
   { // space 
    for (int j = 1; j <= i; j++)
    {
        cout << " ";
    }
    //  star 
    for (int j = 1; j <= (2*n - (2*i + 1)) ; j++)
    {
        cout << "*";
    }
    //  space 
     for (int j = 1; j <= i; j++)
    {
        cout << " ";
    }
    cout << endl;
   }
   }
void pattern10(int n){
 // upper triangle
 for (int i = 0; i <n; i++)
 {
    for (int j = 0; j < i; j++)
    {
        cout << "* ";
    }
    cout << endl;
 }
 // lower triangle
 for (int i = 1; i <n; i++)
 {
    for (int j = 1; j < n -i ; j++)
    {
        cout << "* " ;
    }
    cout << endl;
    /*
    for int i = 0 ; i <= 2n - 1; i++
    int stars = i
    if(i>n) stars = 2n - i
    for j = 0; j <= stars ; j++
    cout << "*"
    cout << endl;
    */
 }
 
 
}
void pattern11(int n){
   for (int i = 1; i <=n; i++)
   { 
    int start = 1;
    if(i %2 == 0){
         start = 0;
    }
    else{
        start = 1;
    }
    for (int j = 1; j <=i; j++)
    {
        cout << start;
        start = 1 - start;
    }
    cout << endl;
   }
   
}
void pattern12(int n){
    // number spcae number
    for (int i = 1; i <= n; i++)
    { // number
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        } // space
        for (int j = 1; j <= 2*(n -i); j++)
        {
            cout << " ";
        }
        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j ;
        }
        cout << endl;
    }
    
}
void pattern13(int n){
    int start = 1;
    for (int i = 1; i <= n; i++)
    { 
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start ++;
        }
        cout << endl;
    }
    
}
void pattern14(int n){
 for (int i = 0; i <n; i++)
{
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
        cout << ch << " ";
    }
    cout << endl;
}
}
void pattern15(int n){
for (int i = 0; i <n; i++)
{
    for (char ch = 'A'; ch <= 'A' + (n -i - 1); ch++)
    {
        cout << ch << " ";
    }
    cout << endl;
}
}
void pattern16(int n){
  for (int i = 0; i < n; i++)
  {  char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
        cout << ch << " ";
    }
    
    cout << endl;
  }
  
}
void pattern17(int n){
    // space char space
    for (int i = 1; i <= n; i++)
    {  // space 
        char ch = 'A';
       for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // char 
        int breakpoint = (2*i + 1)/2 ;
        for (int j =  1; j <= 2*i + 1; j++)
        {
            cout << ch;
            if(j <= breakpoint){
                ch++;
            }
            else ch--;
        }
            
         // space 
         for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }  
}
void pattern18(int n){
for (int i = 0; i <n; i++)
{
    for (char ch  = 'E' - i; ch <= 'E'; ch++)
    {
        cout << ch << " ";
    }
       cout << endl;
}

}
void pattern19(int n){
    int space = 0;
    for (int i = 0; i < n; i++) 
    // upper part 
    {   // star spaces star
        // star
       for (int j = 0; j < n-i; j++)
       {
        cout << "*";
       }
       // space 
       for (int j = 0; j < space; j++)
       {
        cout << " ";
       }
       
       // star
        for (int j = 0; j < n-i; j++)
       {
        cout << "*";
       }
       // lower part 
       
       space +=  2;
      cout << endl;
    }
    int inis = 2*n-2;
        for (int i = 0; i < n; i++) 
    {   // star spaces star
        // star
       for (int j = 0; j <=i; j++)
       {
        cout << "*";
       }
       // space 
       for (int j = 0; j <inis; j++)
       {
        cout << " ";
       }
       
       // star
        for (int j = 0; j <=i; j++)
       {
        cout << "*";
       }
       
       inis -=  2;
      cout << endl;
    }
    
}
void pattern20(int n){

    int space = 2*n-2;
        for (int i = 1; i <= 2*n -1; i++)  
    {   // star spaces star
        
       int stars = i;
       if(i > n){
        stars = 2*n-i;
       } // star
         for (int j = 0; j <stars; j++)
       {
        cout << "*";
       }
       // space
       for (int j = 0; j < space; j++)
       {
          cout << " "; 
       }
       
       // star
        for (int j = 0; j <stars; j++)
       {
        cout << "*";
       }
       if(i < n){
        space -= 2;
       }
       else{
        space += 2;
       }
      cout << endl;
    }
}
void pattern21(int n){
    // star space star 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || i == 3 || j == 0 || j == 3){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
}
void pattern22(int n){

   for (int i = 0; i < 2*n - 1; i++)
   { 
    for (int j = 0; j < 2*n- 1; j++)
    {
         int top = i;
         int left = j;
         int right = (2*n - 2) -j;
         int bottom = (2*n - 2) -i;
        cout << (n - min(min(top,bottom),min(left,right))) << " ";
       }
       cout << endl;
    }
    
   }
int main(){
    pattern16(4);
    return 0;
}