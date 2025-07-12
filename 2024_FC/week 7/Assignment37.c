#include <stdio.h>
#include <string.h>

#define SIZE 19

char board[SIZE][SIZE];

int check_winner(char player) {
   
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            
            if (j + 4 < SIZE &&
                board[i][j] == player &&
                board[i][j + 1] == player &&
                board[i][j + 2] == player &&
                board[i][j + 3] == player &&
                board[i][j + 4] == player) {
                return 1;
            }

            
            if (i + 4 < SIZE &&
                board[i][j] == player &&
                board[i + 1][j] == player &&
                board[i + 2][j] == player &&
                board[i + 3][j] == player &&
                board[i + 4][j] == player) {
                return 1;
            }

            if (i + 4 < SIZE && j + 4 < SIZE &&
                board[i][j] == player &&
                board[i + 1][j + 1] == player &&
                board[i + 2][j + 2] == player &&
                board[i + 3][j + 3] == player &&
                board[i + 4][j + 4] == player) {
                return 1;
            }

            if (i + 4 < SIZE && j - 4 >= 0 &&
                board[i][j] == player &&
                board[i + 1][j - 1] == player &&
                board[i + 2][j - 2] == player &&
                board[i + 3][j - 3] == player &&
                board[i + 4][j - 4] == player) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
  
    for (int i = 0; i < SIZE; i++) {
        scanf("%s", board[i]);
    }

    
    if (check_winner('O')) {
        printf("White\n");
    } else if (check_winner('X')) {
        printf("Black\n");
    } else {
        printf("No winner\n");
    }

    return 0;
}
