#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int i;
  for(i=1; i<=3; i++) {
    if (line[i]!=0 && line[i-1]==0) {
      line[i-1]=line[i];
      line[i]=0;
    } 
  }
  // combine tiles as required

  return 0;
}
