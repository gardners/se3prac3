#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{

  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left

  int j;

  for (j=2; j>0; j--){
    int i;
    for(i=3;i>=1;i--){
      if(line[i] != 0 && line[i-1] == 0){
        line[i-1] = line[i];
        line[i] = 0;
      }
    }
  }

 //combine tiles
int k;
   for(k=0;k<=2;k++){
      if(line[k]==line[k+1]){
        line[k] = line[k]*2;
        line[k+1] = 0;
    }
  }

int h;
for(h=3;h>=1;h--){
      if(line[h] != 0 && line[h-1] == 0){
        line[h-1] = line[h];
        line[h] = 0;
      }
    }

  return 0;
}


int tilt_board_up(int size,int **board){
    if (size<1||size>255) return -1;
    int i;
    for(i=0;i<size;i++) tilt_line_left(size,board[i]);
    return 0;
}


int tilt_board_down(int size,int **board){
    board_rotate_180(size,board);
    tilt_board_up(size,board);
    board_rotate_180(size,board);
    return 0;
}



int tilt_board_right(int size,int **board){
    board_rotate_270(size,board);
    tilt_board_up(size,board);
    board_rotate_90(size,board);
    return 0;
}


int tilt_board_left(int size,int **board){
    board_rotate_90(size,board);
    tilt_board_up(size,board);
    board_rotate_270(size,board);
    return 0;
}
