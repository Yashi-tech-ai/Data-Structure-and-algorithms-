// map = stores in sorted order and key can be any data type like even a pair of int but not in unordered map
//  takes O(log(N)) in all cases 
// unordered map = stores in sorted but not in order 
//  takes O(1) in average and best cases but O(N) = worst case



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ;
//     cout << "Enter size of array : " << endl;;
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elemnts : " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//     // pre-compute 
//     map<int,int> mpp; // for characterstics = map<char,int> but no need to convert it into numbers since it stores in key value pair 
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]] ++;
//     }

//     // to iterate = 
//     for (auto it:mpp)
//     {
//         cout << it.first << "->" << it.second  << endl;
//     }
    

//     int q;
//     cout << " how many times do you want to ask ? " << endl;
//     cin >> q;
//     while(q--){
//         int num;
//         cout << "Enter the number : ";
//         cin >> num;
//         // fetch 
//         cout << num << " appear " << mpp[num] << " times ." << endl;
//     return 0;
// }
// }



// for unordered map 
#include<bits/stdc++.h>
using namespace std;
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
    
    // pre-compute 
    unordered_map<int,int> mpp; // for characterstics = map<char,int> but no need to convert it into numbers since it stores in key value pair 
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] ++;
    }

    // to iterate = 
    for (auto it:mpp)
    {
        cout << it.first << "->" << it.second  << endl;
    }
    

    int q;
    cout << " how many times do you want to ask ? " << endl;
    cin >> q;
    while(q--){
        int num;
        cout << "Enter the number : ";
        cin >> num;
        // fetch 
        cout << num << " appear " << mpp[num] << " times ." << endl;
    return 0;
}
}