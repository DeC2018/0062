#include <iostream>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int s = (m - 1) + (n - 1);
        int r = m - 1;
        double ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (s - r + i) / i;
        }

        return (int)ans;
    }
};

int main() {
    Solution solution;

    int m1 = 3, n1 = 7;
    cout << "Input: m = " << m1 << ", n = " << n1 << endl;
    cout << "Output: " << solution.uniquePaths(m1, n1) << endl;

    int m2 = 3, n2 = 2;
    cout << "Input: m = " << m2 << ", n = " << n2 << endl;
    cout << "Output: " << solution.uniquePaths(m2, n2) << endl;

    return 0;
}
