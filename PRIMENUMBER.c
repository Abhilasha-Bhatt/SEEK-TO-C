#include<stdio.h>
int main()
{
      int num;
      printf("Enter a number\n");
      scanf("%d",&num);
      for(int i=2;i<=num;i++)
      {
          if(num%i==0)
          break;
      }
      if(num==i)
      printf("Number is prime/n");
      else
      printf("Number is not prime/n");
}
