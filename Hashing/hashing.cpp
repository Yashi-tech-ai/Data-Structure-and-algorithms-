// Hashing = prestoring and fetching to allow for quick success 
#include<bits/stdc++.h>
using namespace std;
/* for hash array the maximum we can input is 
in main = 10^6 or 1e6
globally  = 10^8*/

int main(){
    int n ;
    cout << "Enter size of array : " << endl;;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elemnts : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    // precompute 
    int hash[13] = {0}; // 13 here since code assumes there will be numbers from 0 to 12 
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    

   // how many times do you want to ask ?
    int q;
    cout << " how many times do you want to ask ? " << endl;
    cin >> q;
    while(q--){
        int num;
        cout << "Enter the number : ";
        cin >> num;
        // fetch 
        cout << num << " appear " << hash[num] << " times ." << endl;
    }

    return 0;
}