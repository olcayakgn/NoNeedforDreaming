//Target of this program is eliminate duplicate elements of an array
// Exam Prep Homework @TUM Munich, Germany
// Written by Olcay Akgün 17.02.2019

#include <stdio.h>

int main(void)
{
  //Create the array, determine the size and fill it with 0's.
  int matnum[700];
  for(int p=0;p<700;p++){matnum[p]=0;}
  int eingabe;

  //To add new inputs to array
  for(int i=0;i<700;i++)
  {
    int stat=0;
    printf("Matrikelnummer: ");
    scanf("%i",&eingabe);
    if(eingabe==0){break;} //In case 0 the program will execute further operation.
    else{
      for(int c=1;c<700;c++)
      {
        if(matnum[c]==eingabe){stat=stat+1;} //If this new  number is a duplicate of an element of array, stat will +1.
        
      }
    }
    if(stat==0){matnum[i]=eingabe;} //This means the new number is not a duplicate and can be adddes to to our array.
  }

  for(int j=0;j<700;j++)
  {
    if(matnum[j]!=0){ printf("%i\n",matnum[j]);} //Print the array without zeros.
   
  }
