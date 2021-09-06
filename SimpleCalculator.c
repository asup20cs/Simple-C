/* Porgram To Create A Simple Calculator Without Built In Maths Function
Ashutosh Khanal Upadhyay
1CR20CS033
*/

# include <stdio.h>

int main()
{
  int num1,num2,result;
  char op;
  printf("Enter Two Integers:");
  scanf("%d %d",&num1,&num2);
  printf("+ for addition\n");
  printf("- for subtraction\n");
  printf("* for multiplication\n");
  printf("/ for division\n");
  printf("Enter an operator:\n");
  scanf(" %c",&op);

  if (op == '+')
 {
   result = num1+num2;
 } 
 else if (op == '-')
 {
   result = num1 - num2;
 }
 else if (op == '*')
 {
   result=num1*num2;
 } 
 else if(op =='/')
 {
   if (num2==0)
   {
     printf("Zero Divident Error");
     printf("Enter another number");
   }
   else
   {
    result=num1/num2;
   }
 }
  else if (op =='%')
 {
   if (num2==0)
   {
     printf("Denomenator Cannot Be Zero");
     printf("Enter another number");
   }
   else
   {
     result=num1%num2;
   }
 }
 else
 {
   printf("Invalid operator");

 }
 printf("result=%d",result);
 return 0;
 
}
