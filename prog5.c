/* 
Program To Compute Sinx Using Taylor Series And With Inbuilt Function,Compare And Print Them With Appropriate Messages
Ashutosh Khanal Upadhyay
1CR20CS033
JUN 29 2021
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
  int p;
  p=1;
  float deg,x,val,term;
  float neum;
  float deno;
  
  printf("\n Enter The Value Of Angle:");
  scanf("%f", &deg);
  x = (PI/180)*deg;
  val = 0;
  neum = x;
  deno = 1.0;
  /*
  Taylor Series Is Given By
  x= x - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9!-...
  */
  do
  {
    term = neum/deno;
    val= val+term;
    p = p+2;
    neum = -neum*x*x;
    deno = (deno)*(p-1)*p;
    
  } while(fabs(term) >= 0.00001);

  printf("\n Computed Value Of Sin(%f)=%f\n",deg,val);

  printf("\n Library Value Of Sin(%f)=%f\n",deg,sin(x));

  return 0;
}