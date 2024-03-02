#include<bits/stdc++.h>
using namespace std;

nonrepeatingelements(vector<int>&arr,int size)
{
  unordered_map<int,int> hashmap;
  for(auto i:nums) ++hashmap[i];
  for(auto pair : hashmap)
      if(pair.second()==1)  cout<<pair.first()<<" ";
}
int main()
{
  vector<int> arr;
  int size;
  cout<<"Enter the size of array";
  cin>>size;
  cout<<"Enter the array elements:";
  for(int i = 0 ; i< size;i++)
    {
      cin>>arr[i];
    }
  nonrepeatingelements(arr,size);
  return 0;
}
