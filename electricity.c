/*Program 5:
An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit: for the next 100 uits 90 paise per unit: beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged. Write a program to read the name of the user, numer of units consumed and print out the charges.

Ashutosh Khanal Upadhayay
1CR20CS033
Tue,June 8,2021*/

#include <stdio.h>
#define METERCHARGE 100.00
int main()
{
 float unit, total, charge;

 char name[50];

 printf("Enter Consumers Name:");
 fgets(name,50,stdin);
 printf("Enter The Units Consumed:");
 scanf("%f",&unit);
 
 if (unit<0)
 {
   printf("Error,Unit Cannot Be Less Than 0\n");
   return 1;
 }
 else if (unit <= 200)
 {
   charge = unit*0.8;
 }
 else if (unit <= 300)
 {
   charge = 200*0.80+(unit-200)*0.90;
 } 
 else 
 {
   charge = 200*0.80 + 100*0.90 + (unit-300)*1.00;
 } 
 
 total=charge+METERCHARGE;

 if (total > 400)
 {
   total = total +0.15*total;
 }
 
 printf("\nElectricity Bill");
 printf("\nName Of Consumer:");
 printf("%s",name);
 printf("\nTotal Units Consumed:");
 printf("%f\n",unit);
 printf("\nTotal Amount To Be Paid:");
 printf("%f\n",total);
 return 0;
}