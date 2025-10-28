#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;
        int freshOranges = 0;

        // Step 1: count fresh oranges & push rotten ones into queue
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1)
                    freshOranges++;
                else if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }

        // Directions: up, down, left, right
        vector<pair<int, int>> directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};

        int minutes = 0;

        while (!q.empty() && freshOranges > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto [x, y] = q.front();
                q.pop();

                for (auto [dx, dy] : directions) {
                    int nx = x + dx;
                    int ny = y + dy;

                    // Valid cell check
                    if (nx >= 0 && ny >= 0 && nx < rows && ny < cols && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                        freshOranges--;
                    }
                }
            }
            minutes++;
        }

        return (freshOranges == 0) ? minutes : -1;
    }
};
