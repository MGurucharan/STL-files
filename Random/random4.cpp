#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  vector<int>vec={1,2,3};
  // vector<int>::iterator it=vec.begin()-1;
  int k=5;
  while(k>0)
  {
  vec.insert(vec.begin(),*(vec.end()-1));
  vec.erase(vec.begin()+3);
  k--;
  }
  for(auto ele:vec)
  {
    cout<<ele<<endl;
  }
  return 0;
}