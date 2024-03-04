
#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if (a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}
vector<int> sortbyfreq(int arr[],int n)
{
    vector <pair <int,int>> ans;
    unordered_map<int,int>umap;
    for(int i =0 ; i<n;i++)
    {
        umap[arr[i]]++;
    }
    for(int i = 0 ;i<n;i++)
        ans.push_back({arr[i],umap[arr[i]]});
    sort(ans.begin(),ans.end(),cmp);
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        v.push_back(ans[i].first);
    }
    return v;
}
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> freq;
    freq = sortbyfreq(a, n);
    return 0;
}
