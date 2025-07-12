#include <stdio.h>
#define MAX 100

int n, maze[MAX][MAX];

// Depth-First Search (DFS) function
int dfs(int x, int y) {
    if (x < 0 || y < 0 || x >= n || y >= n || maze[x][y] == 1) return 0;
    if (x == n - 1 && y == n - 1) return 1;
    maze[x][y] = 1; // Mark as visited
    return dfs(x + 1, y) || dfs(x - 1, y) || dfs(x, y + 1) || dfs(x, y - 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &maze[i][j]);

    printf(dfs(0, 0) ? "Yes\n" : "No\n");
    return 0;
}
