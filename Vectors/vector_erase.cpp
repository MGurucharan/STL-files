#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  // v.erase(v.begin()+1); //erases only one element at the index 1
  // for(auto ele:v)
  // {
  //   cout<<ele<<" ";
  // }
  // {1,3,4,5}

  // erasing a range of elements.
  // CAUTION : v.erase(begin,end) , here in the end section you should give the address of that element , before which the last deleting should be present.
  // So End is like , [start,end).
  v.erase(v.begin() + 1, v.begin() + 4);
  for (auto ele : v)
  {
    cout << ele << " ";
  }
  // {1,5}
}