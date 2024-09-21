// #include<bits/stdc++.h>
#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int>dq;
  dq.push_back(1); //{1}
  dq.emplace_back(2); //{1,2}
  dq.push_front(5); //{5,1,2}
  dq.emplace_front(6); //{6,5,1,2}

  dq.pop_back();//{6,5,1}
  dq.pop_front(); //{5,1}

  cout<<dq.back()<<" "; //1
  cout<<dq.front();//5

  // rest of the operations same as vectors
  // begin,end,rend,rbegin,clear,size,swap,insert
}