#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  // priority_queue<int>pq; // Maximum Heap 
  //stores maximum element at the top
  // pq.push(3); //{3}
  // pq.push(4); //{4,3} , top -> 4
  // pq.push(1); //{4,3,1} , top -> 4
  // pq.push(5); //{5,4,3,1} , top -> 5

  // cout<<pq.top()<<endl;//prints 5

  // pq.pop(); //{4,3,1} top -> 4
 
  // cout<<pq.top()<<endl; // prints 4

  //size swap empty functions same as other containers

  //Ascending order(from top) (Minimum Heap)
  // stores minimum element at the top.

  priority_queue<int ,vector<int>,greater<int>> pq;
  pq.push(5); // {5} top -> 5
  pq.push(2); // {2,5} top -> 2
  pq.push(8); // {2,5,8} top -> 2
  pq.emplace(10); //{2,5,8,10} top -> 2
  
  cout<<pq.top(); //prints 2

}