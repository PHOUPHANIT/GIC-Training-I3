#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   char prod1[10],prod2[10];
   int quantity1,quantity2;
   float price1,price2,final_price1,final_price2;

   printf("Enter the product's name: ");
   scanf("%s",&prod1);
   printf("Enter the price for product 1: ");
   scanf("%f",&price1);
   printf("Enter the quantity for product 1: ");
   scanf("%d",&quantity1);

   printf("Enter the product's name: ");
   scanf("%s",&prod2);
   printf("Enter the price for product 2: ");
   scanf("%f",&price2);
   printf("Enter the quantity for product 2: ");
   scanf("%d",&quantity2);

   final_price1=price1*quantity1;
   final_price2=price2*quantity2;

   printf("No.\t\t Name\t\t price per unit\t\t quantity\t price\n");
   printf("1\t\t %s\t\t %.2f\t\t\t  %d\t\t  %.2f\n",prod1,price1,quantity1,final_price1);
   printf("2\t\t %s\t\t %.2f\t\t\t  %d\t\t  %.2f\n",prod2,price2,quantity2,final_price2);
}
