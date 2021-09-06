/* 
Write A Program To Get A Positive Integer And Check If It Is Palindrome Or Not

Ashutosh Khanal Upadhyay
1CR20CS033
JUN 15,2021
*/
#include<stdio.h>  
int main()    
{    
 int num,rem,rev=0,temp;    
 printf("Enter A Number:");    
 scanf("%d",&num);    
 temp = num;    
 while(num != 0)    
 {    
   rem = num % 10;    
   rev = (rev * 10) + rem;    
   num = num / 10;    
 } 
 printf("\nThe Reverse of The Number Is: %d",rev);  
 if(temp == rev)    
 {
   printf("\nThe Given Number Is Palindrome Number");
 }    
 else    
 {
   printf("\nThe Given Number Is Not A Palindrome Number\n");
 }   
 return 0;  
}   
