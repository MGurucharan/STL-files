#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  vector<int>v={1,5,3,2};
  //sort(a,a+n); pseudo code
  // sort(v.begin(),v.end()); 
  //{1,2,3,5}

  //sort(a,a+n,greater<int>); pseudo code sorts it in descending order.

  sort(v.begin()+2,v.begin()+4);
  for(auto ele:v)
  {
    cout<<ele<<endl;
  }
  //prints {1,5,2,3}

  // CUSTOMIZED SORTING 

  //sort(a,a+n,your_own_comparator);

  /*
  comparator just returns true or false, if true , then swap the two elements being compared
  else ignore or leave it as it is.

  my way :
  //1. sort it according to the second element 
  //2. if second element is same,then sort
  //3. it according to first element (descending order)

  eg :
  */

  pair<int,int> a[]={{1,2},{2,1},{4,1}};

  /*
  for this , I am going to write my own comparator as :

  bool comp(pair<int,int>p1,pair<int,int>p2) //since we need atleast two elements to compare.
  {
    //lets fulfill the 1. condition
    if(p1.second)<(p2.second) 
    {
      return true; // that means dont swap , its already in correct order
    }
    if(p1.second)>(p2.second)
    {
      return false; // that means swap the two elements (p1 and p2), (not already in correct order)
    }
    //if they are same , then fulfill the 2. and 3. conditions
    if(p1.first)>(p2.first)
    {
      return true;
    }
    return falst; (swap karo if the just above condition is not satisfied).
  }  
  */

}