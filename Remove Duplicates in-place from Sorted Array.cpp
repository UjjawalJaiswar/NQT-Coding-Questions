/*Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.*/

#include<bits/stdc++.h>
using namespace std;

void fillVector(vector<int>& arr, int size) {
    cout << "Enter " << size << " integers in non-decreasing order:\n";
    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
}

int removedup(vector<int>& arr, int size)//function to remove duplicates
{
    int i = 0;
    for(int j=1;j<size;j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main() {
    int size,k;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> myVector;
    fillVector(myVector, size);

    k= removedup(myVector, size);
    cout << "Elements in the vector after removing duplicates are: ";
    for (int i = 0; i < k; i++) 
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
