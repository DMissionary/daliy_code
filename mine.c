#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MINES 10

// 扫雷格子的状态
enum CellStatus {
    HIDDEN, // 未翻开
    REVEALED, // 已翻开
    FLAGGED // 标记为雷
};

// 扫雷格子
struct Cell {
    enum CellStatus status; // 格子状态
    bool isMine; // 是否是雷
};

// 扫雷游戏板
struct Board {
    struct Cell cells[ROWS][COLS]; // 格子二维数组
    int remainingCells; // 剩余格子数
};

// 初始化游戏板
void initBoard(struct Board* board) {
    // 初始化格子
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board->cells[i][j].status = HIDDEN;
            board->cells[i][j].isMine = false;
        }
    }

    // 布置雷
    int minesPlaced = 0;
    while (minesPlaced < MINES) {
        int row = rand() % ROWS;
        int col = rand() % COLS;

        if (!board->cells[row][col].isMine) {
            board->cells[row][col].isMine = true;
            minesPlaced++;
        }
    }

    // 初始化剩余格子数
    board->remainingCells = ROWS * COLS - MINES;
}

// 显示游戏板
void displayBoard(const struct Board* board) {
    printf("  ");
    for (int j = 0; j < COLS; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < ROWS; i++) {
        printf("%2d ", i);
        for (int j = 0; j < COLS; j++) {
            char symbol;
            switch (board->cells[i][j].status) {
                case HIDDEN:
                    symbol = '.';
                    break;
                case REVEALED:
                    symbol = board->cells[i][j].isMine ? '*' : ' ';
                    break;
                case FLAGGED:
                    symbol = 'F';
                    break;
            }
            printf("%2c ", symbol);
        }
        printf("\n");
    }
}

// 检查周围雷的数量
int countSurroundingMines(const struct Board* board, int row, int col) {
    int count = 0;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int newRow = row + i;
            int newCol = col + j;

            if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS) {
                if (board->cells[newRow][newCol].isMine) {
                    count++;
                }
            }
        }
    }

    return count;
}

// 扫雷操作
void playGame() {
    struct Board board;
    initBoard(&board);

    while (true) {
        displayBoard(&board);

        int row, col;
        printf("请输入要翻开的格子坐标（行 列）：");
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
            printf("无效的坐标！\n");
            continue;
        }

        struct Cell* cell = &board.cells[row][col];
        if (cell->status == REVEALED) {
            printf("该格子已经翻开，请选择其他格子！\n");
            continue;
        }

        cell->status = REVEALED;

        if (cell->isMine) {
            printf("BOOM! 你踩到雷了，游戏结束！\n");
            break;
        }

        int surroundingMines = countSurroundingMines(&board, row, col);
        printf("该格子周围有 %d 个雷\n", surroundingMines);

        board.remainingCells--;
        if (board.remainingCells == 0) {
            printf("恭喜！你成功找出所有雷，游戏胜利！\n");
            break;
        }
    }
}

int main() {
    srand(time(NULL));

    while (true) {
        playGame();

        char choice;
        printf("是否开始下一局游戏？（Y/N）：");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }

    return 0;
}

