// Vectors can be accessed using the iterator and their syntax and usage is discussed.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v = {1, 2, 3, 4};

  // cout<<v[0]<<" ";
  // cout<<v.back()<<" ";
  // cout<<*(v.end()-1)<<" ";
  // cout<<*(v.begin())<<" ";

  // vector<int>::iterator iter=v.begin(); // now iter has the first element's address.
  // (iter)++;
  // cout<<*(iter)<<" ";// output is 2.
  // iter+=2;
  // cout<<*(iter)<<" ";// output is 4.

  // vector<int>::iterator iter1=v.end(); //
  // //CAUTION : iter1 points next to last.
  // iter1=iter1-2;
  // //now iter1 has the address of 3.
  // cout<<*(iter1)<<" ";// output is 3.

  // reverse_iterator
  // rend also points next to last (reversed one)

  // vector<int>::reverse_iterator iter2 = v.rbegin();
  // for(vector<int>::reverse_iterator iter2 = v.rbegin();iter2!=v.rend();iter2++)
  // {
  //   cout<<*(iter2)<<" ";
  // }

  // use in for loops

  // for(vector<int>::iterator iterator=v.begin();iterator!=v.end();iterator++)
  // {
  //   cout<<*(iterator)<<" ";
  // }

  // OUTPUT : 1 2 3 4

  // simplified version using auto

  // auto is the keyword that automatically detects the datatype of the vector

  // for(auto iterator=v.begin();iterator!=v.end();iterator++)
  // {
  //   cout<<*(iterator)<<" ";
  // }

  // much more simplified using auto

  for (auto element : v)
  {
    cout << element << " ";
  }
}