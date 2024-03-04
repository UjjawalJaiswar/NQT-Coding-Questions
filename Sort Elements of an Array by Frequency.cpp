#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a, pair<int,int>&b) {
    if(a.second == b.second)
        return a.first<b.first;
    return a.second>b.second;
}

void solve(vector<int> arr, int n){
    unordered_map<int,int>m;
    for(int i = 0; i<n;i++) {
        m[arr[i]]++;
    }
    int size = m.size();
    pair<int, int> p[size];
    int i = 0;
    for(auto it = m.begin();it !=m.end();it++) {
        p[i++] = make_pair(it->first, it->second);
    }
    sort(p,p+size, cmp);
    for(int i=0;i<size;i++) {
        int freq = p[i].second;
        while (freq--) {
            cout<<p[i].first<<" ";
        }
    }
}

int main() {
    vector<int>v = {1,2,3,2,4,3,1,2};
    int n = 8;
    solve(v,n);
    return 0;
}
