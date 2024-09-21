#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  vector<int> vec = {1, 2, 3, 4, 5};
  // cout<<vec.size()<<endl; // gives the size , 5
  // vec.pop_back();
  // for(auto ele:vec)
  // {
  //   cout<<ele<<" ";
  // }
  // //{1,2,3,4}
  vector<int> vec2 = {6, 7, 8};
  // vec.swap(vec2);
  // //vec  -> {6,7,8}
  // //vec2 -> {1,2,3,4}
  // for(auto ele:vec)
  // {
  //   cout<<ele<<" ";
  // }
  // for(auto ele:vec2)
  // {
  //   cout<<ele<<" ";
  // }
  vec2.clear(); // returns an empty vector
  for (auto ele : vec2)
  {
    cout << ele << " ";
  }
  cout << vec2.empty(); // prints 1 since vec2 is empty
  return 0;
}