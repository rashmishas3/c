#include<stdio.h>
int reverse()
{
   int num,rem,reverse_num=0;
printf("\nReverse of a number\n");
   //Input number
   printf("\nEnter any number:");
   scanf("%d",&num);

   while(num>=1)
   {
      rem = num % 10;
      reverse_num = reverse_num * 10 + rem;
      num = num / 10;
   }

   printf("\nReverse of input number is: %d", reverse_num);
  // return 0;
}

