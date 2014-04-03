#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int i;
    for(i=0;i<=2;i++){
      if(line[i]==line[i+1]){
        line[i] = line[i]*2;
        line[i+1] = 0;
    }
  }

  // combine tiles as required
int j;
 for(j=0;j<2;j++){
  for(i=3;i>=1;i++){
   if(line[i] != 0 && line[i-1] == 0){
    line[i-1] = line[i];
    line[i] = 0;
    }
  }
 }


    for(i=0;i<=2;i++){
      if(line[i]==line[i+1]){
        line[i] = line[i]*2;
        line[i+1] = 0;
    }
  }

  return 0;
}
