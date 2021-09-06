/*Program To Print Quadratic Roots Of An Equation
Ashutosh Khanal Upadhyay
1CR20CS033
6/5/2021
*/

#include<stdio.h>
#include<math.h>
int main()
{

 float a,b,c;
 float r1,r2;
 float disc;
 float real_part,imag_part;
 printf("Enter Three Values Of Coefficient:");
 scanf("%f %f %f",&a,&b,&c);

 if(a==0)
 {
   printf("Coefficient Cannot Be Zero.\n");
 }

 disc = b*b-4*a*c;

 if(disc>0)
 {
   printf("The Roots Are Real And Distinct.\n");
   r1=(-b+sqrt(disc))/(2.0*a);
   r2=(-b-sqrt(disc))/(2.0*a);
   printf("The Roots Are r1=%f and r2=%f\n",r1,r2);
 }
 else if(disc<0)
 {
   printf("The Roots Are Imaginary.\n");
   real_part=(-b)/(2.0*a);
   imag_part=sqrt(-disc)/(2.0*a);
   printf("The Roots Are r1=%f+i%f\n",real_part,imag_part);
   printf("The Roots Are r2=%f-i%f\n",real_part,imag_part);
 }
 else 
 {
  printf("The Roots Are Equal.\n");
  r1=r2=(-b)/(2.0*a);
  printf("The Roots Are r1=r2=%f\n",r1);
 }
}