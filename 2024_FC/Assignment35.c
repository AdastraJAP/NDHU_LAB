#include <stdio.h>

void spiralOrder(int n, int m, int matrix[n][m]) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) printf("%d ", matrix[top][i]);
        top++;
        for (int i = top; i <= bottom; i++) printf("%d ", matrix[i][right]);
        right--;
        if (top <= bottom) for (int i = right; i >= left; i--) printf("%d ", matrix[bottom][i]);
        bottom--;
        if (left <= right) for (int i = bottom; i >= top; i--) printf("%d ", matrix[i][left]);
        left++;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    spiralOrder(n, m, matrix);

    return 0;
}