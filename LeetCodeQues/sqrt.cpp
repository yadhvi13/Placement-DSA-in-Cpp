#include <iostream>
using namespace std;

int mySqrt(int x) {
    
    // Edge case
    if (x == 0 || x == 1)
        return x;

    long long start = 1;
    long long end = x;
    long long ans = 0;

    while (start <= end) {
        long long mid = start + (end - start) / 2;

        if (mid * mid == x) {
            return mid;
        }
        else if (mid * mid < x) {
            ans = mid;          // store possible answer
            start = mid + 1;    // move right
        }
        else {
            end = mid - 1;      // move left
        }
    }

    return ans;
}

int main() {
    int x;

    cout << "Enter number: ";
    cin >> x;

    int result = mySqrt(x);

    cout << "Square root (floor value): " << result << endl;

    return 0;
}
