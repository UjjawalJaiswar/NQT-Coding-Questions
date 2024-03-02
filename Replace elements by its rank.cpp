//Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.
#include<bits/stdc++.h>
using namespace std;
void rankify(vector<int> &arr,int size)
{
    typedef pair<int,int> tempair;
    int temp[size];
    vector<tempair> ar;
    for(int i =0;i<size;i++)
    {

        ar.push_back(make_pair(arr[i],i));
    }
    sort(ar.begin(),ar.end());
     for(int j = 0 ; j< size;j++)
     {
         for(int k = 0;k<size;k++)
         {
             if(ar[k].first==arr[j])
                 temp[j] = k+1;   
         }
     }
     cout<<"The Rank of Array elements is:";
     for(int q=0;q<size;q++)
     {
         cout<<temp[q]<<" ";
     }
}

int main()
{
    int size;
    vector<int> arr;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    cout<<"Enter the elements of array:"<<endl;
    for(int i =0 ; i<size;i++)
    {
        int num;
        cin>>num;
        arr.push_back(num);
    }
    rankify(arr,size);
    return 0;
}
