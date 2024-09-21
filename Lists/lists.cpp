#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  list<int>ls; // {}
  ls.push_back(5); // {5}
  ls.emplace_back(4); // {5,4}
  ls.push_front(6); // {6,5,4}
  ls.emplace_front();// {0,6,5,4}
  for(auto ele:ls)
  {
    cout<<ele<<" ";
  }
  // rest of the operations same as vectors
  // begin,end,rend,rbegin,clear,size,swap,insert
  // while vectors are behind the scenes ,implemented using single linked list
  // lists on the other hand are implemented using doubly linked list.
  // hence push_front option or function is available in lists (since its doubly linked (both back and front))

}