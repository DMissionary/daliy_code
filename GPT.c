#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define HEIGHT 20
#define WIDTH 40
#define FOOD '$'
#define SNAKE '*'
#define BODY 'o'

void draw_borders(void);
void update_snake(char direction);
void update_food(void);
void print_map(void);
int is_collision(void);

char map[HEIGHT][WIDTH];
int snake_length = 5;
int x[100], y[100];
char direction;

int main(void) {
  int i, j;

  srand(time(NULL));

  for (i = 0; i < snake_length; i++) {
    x[i] = WIDTH / 2 + i;
    y[i] = HEIGHT / 2;
  }

  update_food();
  while (!is_collision()) {
    if (kbhit()) {
      direction = getch();
    }
    update_snake(direction);
    print_map();
  }

  printf("\nGame Over!\n");
  return 0;
}

void draw_borders(void) {
  int i, j;

  for (i = 0; i < HEIGHT; i++) {
    for (j = 0; j < WIDTH; j++) {
      if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
        map[i][j] = '#';
      } else {
        map[i][j] = ' ';
      }
    }
  }
}

void update_snake(char direction) {
  int i;
  int prev_x = x[0];
  int prev_y = y[0];
  int prev_x2, prev_y2;

  switch (direction) {
    case 'w':
      y[0]--;
      break;
    case 's':
      y[0]++;
      break;
    case 'a':
      x[0]--;
      break;
    case 'd':
      x[0]++;
      break;
    default:
      break;
  }

  for (i = 1; i < snake_length; i++) {
    prev_x2 = x[i];
    prev_y2 = y[i];
    x[i] = prev_x;
    y[i] = prev_y;
    prev_x = prev_x2;
    prev_y = prev_y2;
  }

  if (x[0] == 0 || x[0] == WIDTH - 1 || y[0] == 0 || y[0] == HEIGHT - 1) 
    snake_length = 0;
}


