//Target: Coversion of decimal number in Binary 
//Written as part of Exam Prep @TUM Munich, Germany 
// By Olcay Akgün 17.02.2019

#include <stdio.h>

int main(void) {
  int dezimal;
  int shift=30;
  int aktBit;
  printf("Bitte geben Sie eine Dezimal Zahl ein: ");
  scanf("%i",&dezimal);

  for (int i=0;i<31;i++)
  {
    aktBit=(dezimal>>shift);
    aktBit=(aktBit&0X00000001);
    printf("%i",aktBit);
    shift--;
  }
}
