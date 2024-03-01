#include<bits/stdc++.h>
using namespace std;

void fillVector(vector<int>& arr, int size) {
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> myVector;
    fillVector(myVector, size);

    cout << "Elements in the vector are: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
