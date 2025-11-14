#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long rev = 0, num = x;
        while (num) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev == x;
    }
};

int main() {
    Solution s;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (s.isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}
