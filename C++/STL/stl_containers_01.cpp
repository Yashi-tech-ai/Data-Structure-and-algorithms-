/*Algorithms , functions , iterators , container */
#include<bits/stdc++.h>
using namespace std;

// pair
  void explainpair(){
  pair<int,int> p = {1,3};
  cout << p.first << "" <<  p.second << endl;
  pair<int , pair<int,int>> q = {1,{2,3}};
    cout << q.first << "" <<  q.second.second << " " << q.second.first << endl; 
   pair<int , int> arr[]= {{1,2},{3,4}};
   cout << arr[1].second << endl;
  }
  int main(){
   
    return 0;
  }



/*  Vectors => dynamic so size can be increased 
vector <int> v;
v.push_back(1); 
v.emplace_back(2); // faster than push back 
vector<pair<int,int>> vec;
v.push_back({1,2});
v.emplace_back(1,2);

vector<int> v(5,100); = {100,100,100,100,100} can be increased by push and emplace 
vector<int> v(5); = {0,0,0,0,0}
vector<int> v1(5,20); = {}
vector<int> v2(v1) = copy of v1

// access to vectors
vector<int> :: itertor it = v.begin();
it++;
cout << *(it) << " ";
it += 2;
cout << *(it) ;

vector<int> :: iterator it = v.end(); = points to right after last element 
vector<int> :: iterator it = v.rend(); = reverse end 
vector<int> :: iterator it = v.rbegin(); = reverse begin 
 
cout << v[0] or << v.at[0];
cout << v.back() << " ";

for(vector<int>:: iterator it = v.begin(); it != v.end(); it++ ){
cout << *(it)  }
for(auto it = v.begin(); it != v.end();it++) // auto here automatically assigns datatype  
{cout << *(it) << " "}
for(auto it :v ){
cout << it << " "}

// deletion 
v.erase(v.begin()+1);
v.erase(v.begin()+2,v.begin()+4);

// insertion function 
vector<int>v(2,100);
v.insert(v.begin(),300);
v.insert(v.begin() + 1,2,10; // + position ,times , number 

vector<int>copy(2,50);
v.insert(v.begin(),copy.begin(), copy.end());
cout << v.size();
v.pop_back(); // last element is deleted 
v1.swap(v2);
v.clear();
cout << v.empty(); 

*/

/*  List
   list<int> ls;
   ls.push_back(2);
   ls.emplace_back(4);
   ls.push_front(5); // very cheap compared to vector 
   ls.emplace_front(); {2,4}
   rest function same as vector
   begin,end,rbegin,rend,clear,insert,size,swap
 */


 /* Dequeue
  deque<int> dq;
   dq.push_back(2);
   dq.emplace_back(4);
   dq.push_front(5); 
   dq.emplace_front(); {2,4}
   dq.pop_back();
   dq.pop_front();
   dq.back();
   dq.front();
   rest function same as vector 
   begin,end ,rend,rbegin,rbegin,clear,insert,size,swap
 */


 /* stack  = LIFO , indexing is not allowed 
 stack<int> st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 st.emplace(5); // 
 
 cout << st.top();
 st.pop();
 cout << st.top();
 cout << st.size();
cout << st.empty();
stack<int> st1,st2;
st1.swap(st2);
 */


 /* Queue = FIFO 
  queue<int> qt;
  qt.push(1);
  qt.push(2)
  qt.emplace(4) = {1,2,4}

  qt.back() += 5

  cout << qt.back(); prints 9
  cout << qt.front() ; print 1

  qt.pop() ; {2,9}
  cout << qt.front(); // prints 2
  size swap empty same as stack 
 */


 /*  Priority queue = the maximum number shows at the top 
   priority_queue<int>pq;
   pq.push(5)
   pq.push(2)
   pq.push(8)
   pq.emplace(10) {10,8,5,2}

   cout << pq.top(); 10
   pq.pop() {8,5,2}
   cout << pq.pop()  8

size swap empty same as stack 

minimum heap 
  priority_queue<int , vector<int>,greater<int>> pq; = to print minimum at top 
  pq.push(5); 5
  pq.push(2); 2,5
  pq.push(8);  2,5,8
  pq.emplace(10) = {2,5,8,10}

  cout << pq.top(); prints 2

 */


 /* set  = sorted and unique 
 set<int>st;
 st.insert(1);
 st.emplace(2);
 st.insert(2);
 st.insert(4);
 st.insert(3); {1,2,3,4}
  
 functionality of insert in vector 
 can be used also ,that only increases efficiency 
  begin,end,rend,rbegin,size,swap and empty same as above 

  auto it = st.find(3) // iterator points to find 
  auto it = st.find(6)
  st.erase(5)

  int cnt = st.count(1)

  auto it = st.find(3)
  st.erase(it);

  auto it1 = st.find(2)
  auto it2 = st.find(4)
  st.erase(it1,it2) // erases between (first and last )
   lower bound and upper bound works the same way as in vector does 
  auto it = st.lower_bound(2);
  auto it = st.lower_bound(3);

 */


 /* Multiset 
  everything same as set but stores duplicate element as well 

  multiset<int>ms;
  ms.insert(1)
  ms.insert(1)
  ms.insert(1) = {1,1,1}

  ms.erase(1) = all 1s are erased 

  int cnt = ms.find(1);
  ms.erase(ms.find(1)) // only single 1 is removed

  ms.erase(ms.find(1)m ms.find(1) + 2)
  rest all functions are same as set 
 */


 /* Unordered set = unique and no sorting 
  unordered_set<int> st;
  lower bound and upper bound function does not works
  rest all functions are same as above
  it doesn't store in any particular order 
  has better time complexity than set in many cases , except some when collison happens 

 */

 /* map = key value mapping where keys are unique and both can be any datatype also stores in sorted order of keys 
 map <int,int> mpp;
 map<int,pair <int,int>> mpp;
 map < pair <int,int> int>mpp;

 mpp[1] = 2;
 mpp.empalce({3,1});
 mpp.insert({2,4});
 mpp[{2,3}] = 10;

 {
    {1,2}
    {2,4}
    {3,1}

 }
    for(auto it : mpp){
      cout << it.first << " " << it.second << endl;
    }
  cout << mpp[1];
  cout << mpp[5];

  auto it = mpp.find(3);
  cout << *(it).second;

  auto it = mpp.find(5);

  auto it = mpp.lower_bound(2);
  auto it = mpp.upper_bound(3);

  erase, swap ,size ,empty are same as above 
 */


 /* Multimap 
 everything same as map 
 you can store duplicate keys 
 only mpp[key] is not used
 */


 /* unordered map = unique keys but not sorted 
 same as set and unordered_set difference 
 */
 