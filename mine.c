#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MINES 10

// ɨ�׸��ӵ�״̬
enum CellStatus {
    HIDDEN, // δ����
    REVEALED, // �ѷ���
    FLAGGED // ���Ϊ��
};

// ɨ�׸���
struct Cell {
    enum CellStatus status; // ����״̬
    bool isMine; // �Ƿ�����
};

// ɨ����Ϸ��
struct Board {
    struct Cell cells[ROWS][COLS]; // ���Ӷ�ά����
    int remainingCells; // ʣ�������
};

// ��ʼ����Ϸ��
void initBoard(struct Board* board) {
    // ��ʼ������
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board->cells[i][j].status = HIDDEN;
            board->cells[i][j].isMine = false;
        }
    }

    // ������
    int minesPlaced = 0;
    while (minesPlaced < MINES) {
        int row = rand() % ROWS;
        int col = rand() % COLS;

        if (!board->cells[row][col].isMine) {
            board->cells[row][col].isMine = true;
            minesPlaced++;
        }
    }

    // ��ʼ��ʣ�������
    board->remainingCells = ROWS * COLS - MINES;
}

// ��ʾ��Ϸ��
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

// �����Χ�׵�����
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

// ɨ�ײ���
void playGame() {
    struct Board board;
    initBoard(&board);

    while (true) {
        displayBoard(&board);

        int row, col;
        printf("������Ҫ�����ĸ������꣨�� �У���");
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
            printf("��Ч�����꣡\n");
            continue;
        }

        struct Cell* cell = &board.cells[row][col];
        if (cell->status == REVEALED) {
            printf("�ø����Ѿ���������ѡ���������ӣ�\n");
            continue;
        }

        cell->status = REVEALED;

        if (cell->isMine) {
            printf("BOOM! ��ȵ����ˣ���Ϸ������\n");
            break;
        }

        int surroundingMines = countSurroundingMines(&board, row, col);
        printf("�ø�����Χ�� %d ����\n", surroundingMines);

        board.remainingCells--;
        if (board.remainingCells == 0) {
            printf("��ϲ����ɹ��ҳ������ף���Ϸʤ����\n");
            break;
        }
    }
}

int main() {
    srand(time(NULL));

    while (true) {
        playGame();

        char choice;
        printf("�Ƿ�ʼ��һ����Ϸ����Y/N����");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }

    return 0;
}

