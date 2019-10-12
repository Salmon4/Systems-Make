#include <stdio.h>
#include <stdlib.h>
int main(){
  int a1[] = {10,9,8,7,6};
  int a2[] = {};
  double ans = avg(a1,5);
  printf("Average of {10,9,8,7,6} is: %f\n", ans);
  copy(a1,a2,5);
  int i;
  for (i = 0; i < 5; i++){
    printf("%d ", a1[i]);
  }
  printf("\n");
  int j;
  for (j = 0; j < 5; j++){
    printf("%d ", a2[j]);
  }

  printf("\n");
  printf("The length of APPLE is: %d", lengthOfWord("APPLE"));
}
