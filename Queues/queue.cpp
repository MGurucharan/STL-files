// FIFO , front - deletion , rear - addition

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  queue<int> q;
  q.push(1); // {1}
  q.push(2); // {1,2}
  q.push(3); // {1,2,3}

  q.back()+=5;
  cout<<q.back();
  cout<<q.front();
  q.pop();
  cout<<q.front();

}