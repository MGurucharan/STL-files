// SORTED AND UNIQUE 
// Tree is maintained , to implement Sets.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  set<int> st;
  st.insert(1); // {1}
  st.emplace(2); // {1,2}
  st.insert(2); // {1,2}
  st.insert(4); // {1,2,4}
  st.insert(3); // {1,2,3,4}

  // //Functionality of insert in vector
  // // can be used also,that only increases efficiency

  // //begin(),end(),rbegin(),rend(),size()
  // // empty() and swap() are same as those of other containers

  // //{1,2,3,4,5}
  // auto it=st.find(3);
  // // find returns the address of the element.

  // auto it=st.find(6);
  // // now returns as if its st.end() , so returns the address of next to last element.

  // st.erase(5); // erases 5  // take log(N) time

  // int count=st.count(2); // returns the count of the element 2 , if its present then 1 , 
  // // else returns zero.

  // auto it=st.find(3); // 
  // st.erase(it); // it takes constant time.
  // // you can either give erase(ele) , erase(iterator).

  // //{1,2,3,4,5}
  // auto it1=st.find(2);
  // auto it2=st.find(4);
  // st.erase(it1,it2); // after erase {1,4,5} [first,last)

  //sets lower and upperbounds() , they work in the same way as in case
  // of vectors

  auto it=st.lower_bound(2); //gives the index of the element > = find_element
  auto it2=st.upper_bound(3); //gives the index of the element > find_element
  cout<<*it<<endl; //prints 2
  cout<<*it2<<endl; //prints 4
}
