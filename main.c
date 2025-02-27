#include <stdio.h>

int uniquePaths(int m, int n) {
    int dp[m][n];
    for (int i = 0; i < m; i++)
        dp[i][0] = 1;
    for (int j = 0; j < n; j++)
        dp[0][j] = 1;
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}

int main() {
    int m1 = 3, n1 = 7;
    printf("Input: m = %d, n = %d\n", m1, n1);
    printf("Output: %d\n", uniquePaths(m1, n1));

    int m2 = 3, n2 = 2;
    printf("Input: m = %d, n = %d\n", m2, n2);
    printf("Output: %d\n", uniquePaths(m2, n2));

    return 0;
}
