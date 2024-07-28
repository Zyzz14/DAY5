#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> arr1(size);
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    vector<int> result(size);
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] + arr1[i];
    }

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
