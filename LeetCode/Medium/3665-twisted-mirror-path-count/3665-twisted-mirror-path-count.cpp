class Solution {
public:
int row, col;
    const long long mod = 1e9 + 7;

    vector<vector<int>> nums;
    vector<vector<vector<long long>>> dp;

    long long dfs(int i, int j, int dir) {

        if (i >= row || j >= col)
            return 0;

        if (i == row - 1 && j == col - 1)
            return 1;

        if (dp[i][j][dir] != -1)
            return dp[i][j][dir];

        long long ans = 0;

        if (nums[i][j] == 1) {

            if (dir == 0) {
                // Entered from left: reflect down
                ans = dfs(i + 1, j, 1);
            }
            else {
                // Entered from above: reflect right
                ans = dfs(i, j + 1, 0);
            }

        }
        else {

            // Empty cell: move right or down
            long long right = dfs(i, j + 1, 0);
            long long down = dfs(i + 1, j, 1);

            ans = (right + down) % mod;
        }

        return dp[i][j][dir] = ans;
    }

    int uniquePaths(vector<vector<int>>& grid) {

        nums = grid;

        row = grid.size();
        col = grid[0].size();

        dp.assign(row,
            vector<vector<long long>>(
                col, vector<long long>(2, -1)
            )
        );

        // Initial direction is right
        return dfs(0, 0, 0);
    }
};