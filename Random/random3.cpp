#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  vector<int> vec = {1, 2, 3};
  int k = 4;
  while (k > 0)
  {
    vec.insert(vec.begin(), *(vec.end() - 1));
    k--;
  }
  for(auto ele:vec)
  {
    cout<<ele<<endl;
  }
}