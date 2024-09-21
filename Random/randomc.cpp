#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  // vector<int>vec={2,3,9};
  // int x=*(vec.end()-1);
  // cout<<x;

  // int digit_first = sum % 10;
  // rev.push_back(digit_first);
  // for(auto ele:rev)
  // {
  //   cout<<ele<<endl;
  // }
  // for(vector<int>::iterator it1 = rev.begin();it1!=;it1--)
  // {
  //   digit = sum % 10;
  //   rev.insert(it1, digit);
  //   sum = sum / 10;
  //   it1--;  
  // }
  // vector<int>::iterator it1 = rev.begin();
  int sum=4322;
  vector<int> rev;
  int digit=0;
  while(sum != 0)
  {
    digit = sum % 10;
    rev.push_back(digit);
    sum = sum / 10;
  }
  for(auto ele:rev)
  {
    cout<<ele<<endl;
  }
  reverse(rev.begin(),rev.end());
  for(auto ele:rev)
  {
    cout<<ele<<endl;
  }


}