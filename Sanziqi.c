#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3]; // 游戏棋盘

void initializeBoard() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    int i;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i != 2) {
            printf("\n---|---|---\n");
        }
    }
    printf("\n");
}

int checkWin() {
    int i;
    // 检查行
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1;
        }
    }
    // 检查列
    for (i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1;
        }
    }
    // 检查对角线
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }
    return 0;
}

int makeMove(int row, int col, char symbol) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = symbol;
        return 1;
    }
    return 0;
}

int getRandomMove(int* row, int* col) {
    int availableMoves[9][2];
    int moveCount = 0;
    int i, j;

    // 找到所有可用的移动位置
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                availableMoves[moveCount][0] = i;
                availableMoves[moveCount][1] = j;
                moveCount++;
            }
        }
    }

    if (moveCount > 0) {
        // 从可用的移动位置中随机选择一个
        int randomIndex = rand() %moveCount;
        *row = availableMoves[randomIndex][0];
        *col = availableMoves[randomIndex][1];
        return 1;
    }

    return 0;
}

int main() {
    int row, col, currentPlayer = 1, moveCount = 0;
    char symbol;

    srand(time(NULL)); // 初始化随机数种子

    initializeBoard();

    while (1) {
        if (currentPlayer == 1) {
            printf("玩家 1，请输入你的下棋位置（行和列，范围是0到2），用空格分隔：");
            scanf("%d %d", &row, &col);
            symbol = 'X';
        } else {
            printf("电脑正在思考...\n");
            if (!getRandomMove(&row, &col)) {
                printf("无有效的移动。\n");
                break;
            }
            symbol = 'O';
        }

        if (makeMove(row, col, symbol)) {
            printBoard();
            moveCount++;

            if (checkWin()) {
                if (currentPlayer == 1) {
                    printf("玩家 1 获胜！\n");
                } else {
                    printf("电脑获胜！\n");
                }
                break;
            } else if (moveCount == 9) {
                printf("平局！\n");
                break;
            } else {
                currentPlayer = (currentPlayer % 2) + 1;
            }
        } else {
            printf("无效的移动，请重试。\n");
        }
    }
    return 0;
}
