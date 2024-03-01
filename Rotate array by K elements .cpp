#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rotate(vector<int>&nums, int k)
    {
        vector<int> temp(nums.size());
        for(int i = 0 ; i <nums.size();i++)
        {
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }
};

void fillVector(vector<int>& arr, int size) {
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
}

int main() {
    int size,k;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> myVector;
    fillVector(myVector, size);
    cout << "Enter the position of element along which array is to be rotated: ";
    cin >> k;
    Solution s1;
    s1.rotate(myVector,k);
    cout << "Array after rotation: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
