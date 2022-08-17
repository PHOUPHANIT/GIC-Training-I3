#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*a. Write Hello world by C programming.
****************************************/
/*int main()
{
    printf("Hello world!\n");
    printf("****** *******");
}
b. Write C programming that allows user input of product and price. The product discount 20% and final price after discount*/
/*int main()
{
    char name[20];
    int cost;
    float disc,price;
    printf("Enter the name of product: ");
    scanf("%s",&name);
    printf("Enter the price: ");
    scanf("%d",&cost);
    disc=(cost*20)/100;
    price=cost-disc;
    printf("The product name: %s\n",name);
    printf("The price before discount: %d\n",cost);
    printf("The price before discount: %.2f\n",price);
}
c. Write C program to calculate surface parameter of a circle user need to input radius of circle
then display result*/
/*int main()
{
    float raduis,par,area;
    printf("Enter the number radius of the circle: ");
    scanf("%f",&raduis);
    par=2*3.14*raduis;
    area=3.14*pow(raduis,2);
    printf("Surface of a circle is: %f\n",area);
    printf("Parameter of a circle is: %f\n",par);
}
d.Write C program to sell coffee and tea. Suppose customer can only three product. Thus we allow customer input
product's name, price per unit, quantity of three product.Then show message ,Ex
No        product    price per unit($)        quantity        price($)
1        ice latte    2.3$                      3               4.76$*/
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
/*e.Write C program to convert hour,minutes,second to second.*/
/*int main()
{
    int hour,min,sec,s;
    printf("Enter the hour: ");
    scanf("%d",&hour);
    printf("Enter the minutes: ");
    scanf("%d",&min);
    printf("Enter the second: ");
    scanf("%d",&sec);
    s=(hour*3600)+(min*60)+sec;
    printf("Totals %d",s);
}*/
