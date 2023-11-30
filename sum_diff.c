/*
Your task is to take two numbers of int data type, 
two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line. */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int n1,n2; 
    float nm1,nm2;
    scanf("%i %i\n",&n1,&n2);
    scanf("%f %f",&nm1,&nm2);
    printf("%i %i\n",(n1+n2),(n1-n2));
    printf("%0.1f %0.1f",(nm1+nm2),(nm1-nm2));
    return 0;
}
