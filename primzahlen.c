//This Program finds Prim Numbers to Maximal Limit that user has given.
//Written for Exam Prep. @TUM Munich, Germany
//By Olcay Akgün
//Only for inputs bigger or equal to 2.
#include <stdio.h>

int main(void) {
  int eingabe=0;
  int stat=0;
  printf("Bitte  geben Sie eine Obergrenze ein: ");
  scanf("%i",&eingabe);
  for(int i=2;i<=eingabe;i++)
  {
    stat=0;
    for(int p=2;p<=i;p++)
    {
      if(i%p==0){
        stat=stat+1;;
      }
    }
    if(stat==1)
    {
      printf("%i\n",i);
    }
  }
}
