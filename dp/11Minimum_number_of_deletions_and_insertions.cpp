	#include<bits/stdc++.h>
    using namespace std;
    typedef long long lint;
    int minOperations(string s1, string s2)
    {
        int n1 = s1.length(), n2 = s2.length();
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        int deletions = n1 - dp[n1][n2];
        int additions = n2 - dp[n1][n2];
    }
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
    }
