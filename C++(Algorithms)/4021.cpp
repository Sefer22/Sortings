#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 && j == 0)
                dp[i][j] = 1; // Atin baslangiç pozisyonu
            else
                dp[i][j] = 0;
        }
    }

    for (int i = 2; i <= n; i++) dp[i][1] = 1;
    for (int j = 2; j <= m; j++) dp[1][j] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            dp[i][j] = dp[i - 2][j - 1] + dp[i - 1][j - 2];
        }
    }

    cout << dp[n][m];

    return 0;
}

