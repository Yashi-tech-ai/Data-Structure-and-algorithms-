// union of two sorted arrays such that we have ordered and unique new array 
// can use set or map 
// brute =
/* st.insert array 1 then array 2 and then union[st.size()]
then i = 0
auto it:st {
union[i++] = it}
unions.add(it)
tc = O(n1 log n)+ O(n2 log n) + O(n1 + n2) // n1 and n2 are sizes of arrays 
sc =  O(n1 + n2) + O(n1 + n2)
                  ----------- =  return the array 
*/

// optimal = by two pointer i and j iterating one for each array 
// 

#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> a = { 1, 1, 3,4,6 ,8}; 
vector<int> b = { 2,2,2, 5, 78, 90};
vector<int> c;
int n1 = a.size();
int n2 = b.size();
int i = 0;
int j = 0;
while(i <n1 && j < n2){
    if(a[i] <= b[j]){
    if(c.size() == 0 || c.back() != a[i]){
        c.push_back(a[i]);
    }
    i++;
}
   else{
    
    if(c.size() == 0 || c.back() != b[j]){
        c.push_back(b[j]);
    }
    j++;
   }
}
 // remaining elements 
 while(j < n2){
   
    if(c.size() == 0 || c.back() != b[j]){
        c.push_back(b[j]);
    }
    j++;
      
   }   
 while(i < n1){
    if(c.size() == 0 || c.back() != a[i]){
        c.push_back(a[i]);
    }
    i++;
 }
for(auto it : c){
    cout << it << " ";
}

    return 0;
}