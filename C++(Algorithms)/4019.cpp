#include<iostream>

using namespace std;

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main()  {
    int n, m;
    cin >> n >> m;
    int dp[n+1][m+1];
    
    int x_coord[n*m], y_coord[n*m];
    int coor_index = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> dp[i][j];
        }
    }
    
    for(int i = 2; i <= n; i++) {
        dp[i][1] += dp[i-1][1];
        x_coord[coor_index] = i;
        y_coord[coor_index] = 1;
        coor_index++;
    }
    for(int j = 2; j <= m; j++) {
        dp[1][j] += dp[1][j-1];
        x_coord[coor_index] = 1;
        y_coord[coor_index] = j;
        coor_index++;
    }
   for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            dp[i][j] += minimum(dp[i - 1][j], dp[i][j - 1]);

            if (i == n && j == m) {
                // Son hücreye gelindiginde
                x_coord[coor_index] = i;
                y_coord[coor_index] = j;
                coor_index++;
            } else {
                if (dp[i - 1][j] < dp[i][j - 1]) {
                    x_coord[coor_index] = i - 1;
                    y_coord[coor_index] = j;
                } else {
                    x_coord[coor_index] = i;
                    y_coord[coor_index] = j - 1;
                }
                coor_index++;
            }
        }
    }
    cout << dp[n][m] << endl;
    
    for(int k = 0; k < coor_index; k++) {
        cout << x_coord[k] << " " << y_coord[k] << endl;
    }
    
    return 0;
}

