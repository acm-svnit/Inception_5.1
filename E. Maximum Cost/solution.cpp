#include <iostream>
#include <cstring>

using namespace std;

const long long int MAX = 2025;

long long int N, M;
string a, b;
long long int cost[MAX], dp[MAX][MAX];

int main() {
    cin >> N >> M;
    cin >> a >> b;
    for (long long int i = 'a'; i <= 'z'; i ++) {
        cin >> cost[i];
    }
    for (long long int i = 1; i <= N; i ++) {
        for (long long int j = 1; j <= M; j ++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + cost[a[i - 1]];
            }
            else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    cout << dp[N][M] << endl;
    
    return 0;
}
