//Problem Statement-Given an unsorted array, remove duplicates from the array.
#include <bits/stdc++.h>
using namespace std ;

class removeDuplicate {

public:

    void duplicate(int arr[], int n) {

        map<int, int>mp ;

        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end()) {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }

} ;
int main() {

    vector<int>arr;
    int size;
    cout<<"Enter the size of array:";
    cout<<"Enter the array elements:";
    for(int i = 0 ; i < size; i++)
        {
            cin>>arr[i];
        }

    removeDuplicate d1  ;
    d1.duplicate(arr, n) ;

    return 0 ;
}
