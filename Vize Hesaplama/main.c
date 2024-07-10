#include <stdio.h>
int main(void) {

  int vize, fnl;
  printf("Vize notunu girin:");
  scanf("%d",&vize);

  printf("Final notunu girin:");
  scanf("%d",&fnl);

  float ortalama = vize*0.4 + fnl*0.6;

  if (ortalama >= 60){
    printf("%.2f ortalama ile gecti", ortalama);
  }
  
  else{
    printf("%.2f ortalama ile kaldi", ortalama);
  }
  
  return 0;
}