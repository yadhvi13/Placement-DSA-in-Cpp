#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};

    if (next_permutation(arr, arr + 3)) {
        for (int x : arr)
            cout << x << " ";
    } else {
        cout << "No next permutation";
    }

    return 0;
}