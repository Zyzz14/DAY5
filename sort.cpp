#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 4, 6, 8, 1, 5};

    cout << arr.capacity() << endl;
    cout << arr.size() << endl;

    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);

    cout << arr.at(7) << endl;

    sort(arr.begin(), arr.end());

    for (int num : arr) {
        cout << num << " ";
    }
    
    cout << endl;

    return 0;
}
