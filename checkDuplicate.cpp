#include <iostream>
#include <array>
#include <numeric> // Include for accumulate function
using namespace std;

void checkDuplicates(const array<int, 6>& marks) {
    for (int i = 0; i < marks.size(); i++) {
        for (int j = i + 1; j < marks.size(); j++) {
            if (marks[i] == marks[j]) {
                cout << "Duplicate found: " << marks[i] << endl;
            }
        }
    }
}

int main() {
    // Normal array
    int arr[] = {1, 2, 3, 4, 5, 2};

    // STL array
    array<int, 6> marks = {1, 2, 3, 4, 3, 4};

    cout << marks.size() << endl; // To check the size of an array
    cout << marks.at(2) << endl; // To find the element using index
    cout << marks.empty() << endl; // To check if the array is empty or not

    int first_element = marks.front();
    cout << first_element << endl;

    int last_element = marks.back();
    cout << last_element << endl;

    int sum = accumulate(marks.begin(), marks.end(), 0);
    cout << sum << endl;

    checkDuplicates(marks);

    return 0;
}
