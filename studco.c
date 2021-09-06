/*
Program To Implement Structure To Read Write And Compute Average Marks And The Students Scoring Average And Below Average Marks For A Class Of N Students
Ashutosh Khanal Upadhyay
1CR20CS033
24 August 2021
*/
#include <stdio.h>
struct student
{
 int std_id;
 char name [50];
 float eng;
 float sci;
 float soc;
 float mat;
 float comp;
 float avg;
};
int main()
{
  
  struct student s[50];
  int i,n;
  printf("Enter The Number Of Students:");
  scanf("%d",&n);
  printf("Enter The Students Details:\n");
  for (i=0;i<n;i++)
  {
    printf("\nEnter Student's ID:");
    scanf("%d",&s[i].std_id);
    printf("\nEnter Student's Name:");
    scanf("%s",s[i].name);
    printf("\nEnter Marks In English:");
    scanf("%f",&s[i].eng);
    printf("\nEnter Marks In Science:");
    scanf("%f",&s[i].sci);
    printf("\nEnter Marks In Social Studies:");
    scanf("%f",&s[i].soc);
    printf("\nEnter Marks In Maths:");
    scanf("%f",&s[i].mat);
    printf("\nEnter Marks In Computer Science:");
    scanf("%f",&s[i].comp);
  }
  for (i=0;i<n;i++)
  {
    s[i].avg=(s[i].eng+s[i].sci+s[i].soc+s[i].mat+s[i].comp)/5;
  }
  printf("\n Students Having Above Average Marks:\n");
  for (i=0;i<n;i++)
  {
    if (s[i].avg >= 35.0)
    {
     printf("\n Student ID: %d",s[i].std_id);
     printf("\n Name Of Student: %s",s[i].name);
     printf("\n Average Marks Of Students: %f",s[i].avg);
    }
  }
  printf("\n Students Having Below Average Marks:");
  for (i=0;i<n;i++)
  {
    if (s[i].avg <= 35.0)
    {
     printf("\n Student ID: %d",s[i].std_id);
     printf("\n Name Of Student: %s",s[i].name);
     printf("\n Average Marks Of Students: %f",s[i].avg);
    }
  }
}