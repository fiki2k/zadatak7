// Zadatak je pronaci broj kojem je suma kubova znamenki jednaka samom broju.

#include<stdio.h>
int main()
{
   int br,copy_of_br,sum=0,ostatak;

   printf("Unesi broj:");
   scanf("%d",&br);

   /* Vrijednost varijable br ce se promjenit 
   oa ju trebamo spremit u privremenu varijablu.
   */
   copy_of_br = br;

  
   while (br != 0)
   {
      ostatak = br % 10;
      sum = sum + (ostatak*ostatak*ostatak);
      br = br / 10;
   }

   if(copy_of_br == sum)
      printf("Suma kubova znamenki je jednaka broju %d",copy_of_br);
   else
      printf("Suma kubova znamenki nije jednaka broju %d",copy_of_br);
   return(0);
}
