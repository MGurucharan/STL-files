#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  // Generally map stores the elements in {key,value} pair in the memory
  // RULE : Maps generally follow , UNIQUE SORTED KEYS , and UNCONDITIONAL VALUES (No RULE on values)
  // various map declarations :

  map<int,int>mpp; // maps from key (integer type) to value (integer type)

  map<int,pair<int,int>> mpp; //maps from key(int) to value (int pair)

  map<pair<int,int>,int> mpp; //maps from key(int pair) to value(int)

  // int to int initialization

  // mpp[1]=2;
  // mpp.emplace({3,1})
  // mpp.insert({2,4})

  // {{1,2},{2,4},{3,1}}

  //for(auto ele:mpp)
  // {
  //   cout<<ele.first<<" "<<ele.second<<endl;
  // }

  // int pair to int 

  //mpp[{2,3}]=10;

  //cout<<mpp[5]; //not there so prints NULL or 0

  /*
  auto it=mpp.find(3); // gives the address  of key 3 i.e this element whole : {3,1}
  cout<<*(it).second; // prints 1

  auto it=mpp.find(5);
  // 5 key not there so , returns the address of next to last element , i.e mpp.end() , end means
  after the map.
  */

  //lower and upperbound functions hold true 
  // and follow the same syntax as sets 
  //erase ,swap , size ,empty , are same as above.

}