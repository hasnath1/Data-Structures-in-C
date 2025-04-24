
#include "utils.h"

int doWhateverYouWant(int x){
  int y = 0;
  for (int i = 0; i < x;i++){
    y += i;
    y += x;
  }

  return y;
}