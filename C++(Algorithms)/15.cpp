#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int m, n;
    cin >> m >> n;
    int dp[m + 1][n + 1];
    string road;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> dp[i][j];
        }
    }

    for (int i = 2; i <= m; i++) dp[i][1] += dp[i - 1][1];
    for (int j = 2; j <= n; j++) dp[1][j] += dp[1][j - 1];

    for (int i = 2; i <= m; i++) {
        for (int j = 2; j <= n; j++) {
            dp[i][j] += maximum(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int k = n, t = m;
    while (k > 1 || t > 1) {
        if (k > 1 && t > 1) {
            if (dp[t - 1][k] > dp[t][k - 1]) {
                road += "F";
                t--;
            } else {
                road += "R";
                k--;
            }
        } else if (k == 1) {
            road += "F";
            t--;
        } else if (t == 1) {
            road += "R";
            k--;
        }
    }
    reverse(road.begin(), road.end());
    cout << road;

    return 0;
}

