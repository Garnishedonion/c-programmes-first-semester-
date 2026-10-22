#include<stdio.h>
int main (){
float celsius, fahranhite;
printf("enter temprature in celsius:");
scanf("%F",&celsius);

float f = (1.8*celsius)+32;
printf("%.2f",f);
return 0;
}