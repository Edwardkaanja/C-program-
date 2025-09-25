/*
Name:edward
Reg no:CT101/26505/25
Description: loan borrowing 
*/


#include <stdio.h>
int main ()
{
int age;
float income;
printf ("enter age value:");
scanf ("%d",& age);
printf("enter income value:");
scanf("%f",& income);

if(age>=21&& income>=21000){
printf ("congratulations you qualify for a loan ");
}else{
printf ("unfortunately,we are unable to offer you a loan at this time ");
}






}