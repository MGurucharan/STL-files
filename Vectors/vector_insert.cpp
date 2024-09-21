#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  vector<int> v(2, 100);
  // {100,100}
  v.insert(v.end(),300);
  for(auto ele:v)
  {
    cout<<ele<<" ";
  }
  // v.insert(v.begin(), 300);
  // // {300,100,100}
  // v.insert(v.begin() + 1, 2, 10);
  // // {300,10,10,100,100}

  // To insert more than one element (copy)
  // vector<int> jocopykarunga(3,50);
  // v.insert(v.begin(),jocopykarunga.begin(),jocopykarunga.end());

  // for(auto ele:v)
  // {
  //   cout<<ele<<" ";
  // }
  //{50,50,300,10,10,100,100}
}
