// SORTED BUT NOT UNIQUE .

// Everything is same as sets
// only stores duplicate elements also

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  multiset<int>ms;
  ms.insert(1); //{1}
  ms.insert(1); //{1,1}
  ms.insert(1); //{1,1,1}

  // ms.erase(1); // all occurences of 1 are erased .

  // int count =ms.count(1);

  // ms.erase(ms.find(1));
  //single one erased.

  ms.erase(ms.find(1),std::next(ms.find(1),2)); //[start,end)
  for(auto ele:ms)
  {
    cout<<ele<<endl;
  }
  //rest all functions same as sets


}