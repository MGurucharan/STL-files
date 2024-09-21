//LIFO , deletion or pop or addtion from the top

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  stack<int> st;
  st.push(1); //{1}
  st.push(3); //{1,3} , st[index] is invalid
  st.push(5); //{1,3,5}
  st.emplace(2); //{1,3,5,2}

  cout<<st.top();
  st.pop();
  cout<<st.size();
  cout<<st.empty();

  stack<int>st1,st2;
  st1.swap(st2);
  return 0;
}