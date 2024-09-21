#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  vector<int>nums={1,1,2};
  // vector<int> digits = {1, 0, 1,9 };
  // int i = 1;
  // if (*(digits.end() - 1) == 9||*(digits.begin())==9)
  // {
  //   vector<int>::iterator it = digits.end() - 1;
  //   while (*(it) == 9)
  //   {
  //     *it = 0;
  //     *(it - i) = 1;
  //     i--;
  //   }
  // }
  // for(auto ele:digits)
  // {
  //   cout<<ele<<endl;
  // }
  vector<int>new_nums;
  int num;
  for(auto ele:nums)
  {
      int index=lower_bound(nums.begin(),nums.end(),ele)-nums.begin();
      if(nums[index]!=num)
      {
        new_nums.push_back(nums[index]);
        num=nums[index];
      }
  }
  for(auto ele1:new_nums)
  {
    cout<<ele1<<endl;
  }
  cout<<new_nums.size();
  
}