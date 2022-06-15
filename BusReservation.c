#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
float func_calculate(char[],char[]);
float func_calc_tariff(float,int);
struct travel_distance
{
char departure[5][20];
float distance[5];
};
void main()
{
int i,person,seat;float disp,rate;
char from[50],to[50];
printf("enter the departure (TBM only) : ");
scanf("%s",from);
printf("enter the arrival (Available stations -
SAL,MAD,CBE,TRI,CGH) : ");
scanf("%s",to);
printf("Enter Number of persons:");
scanf("%d",&person);
disp=func_calculate(from,to);
rate=func_calc_tariff(disp,person);
printf("TICKET\n");
printf("FROM : %s\n",from);
printf("TO : %s\n",to);
printf("DISTANCE : %.2f\n",disp);
printf("RATE : %.2f\n",rate);
FILE *fptr;
fptr = fopen("bus.txt", "a");
if (fptr == NULL)
{
 printf("File does not exists \n");
 return;
}
seat=50-person;
fprintf(fptr,
"%s\t\t%s\t\t%.2f\t\t%d\t\t%.2f\t\t%d\t\t\n",from,t
o,disp,person,rate,seat);
fclose(fptr);
}
float func_calculate(char a[], char b[])
{
struct travel_distance
q={"SAL","MAD","CBE","TRI","CGH",350,700,800,600,
90};
int i=0,f,t,c,d;
for(i=0;i<5;i++)
{
 if(strcmp(a,q.departure[i])==0)
 {
 f=i;
 }
 if(strcmp(b,q.departure[i])==0)
 {
 t=i;
 }
}
c=q.distance[f]-q.distance[t];
d=abs(c);
return d;
}
float func_calc_tariff(float x,int y)
{
float m;
if(x<=100)
 m=x*y*2;
else if (x<=200)
{
 m=x*y*1;
}
else
{
 m=x*y*1;
}
return m;
}