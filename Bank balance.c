#include <stdio.h>
int main()
{
    float height;
    double bankbalance;
    char phonenumber[10];
    
  printf("insert height:");
  scanf("%f",&height);
  printf("enter bank balance:");
  scanf( "%lf", bankbalance) ;
  printf("enter phone number:");
  scanf("%s",phonenumber);
  printf("height:%.2f\n",height);
  printf("bank balance: %lf\n",bankbalance);
  printf("phone number:%s\n" ,phonenumber);
  return 0;
}
