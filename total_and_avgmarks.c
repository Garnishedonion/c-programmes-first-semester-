#include<stdio.h>
struct Student
{
    int roll;
    char name[30];
    float m1;
    float m2;
    float m3;
    float total;
    float avg;
    
};
int main()
{
    struct Student s1;
    printf("enter name\n");
    scanf("%29s",&s1.name);
    printf("enter roll number\n");
    scanf("%d",&s1.roll);
    printf("enter marks of subject 1\n");
    scanf("%f",&s1.m1);
    printf("enter marks of subject 2\n");
    scanf("%f",&s1.m2);
    printf("enter marks of subject 3\n");
    scanf("%f",&s1.m3);
    s1.total=s1.m1+s1.m2+s1.m3;
    s1.avg=s1.total/2;
    printf("student details\n");
    printf("roll no. %d\n",s1.roll);
    printf("name : %s\n",s1.name);
    printf("total marks %.2f\n",s1.total);
    printf("marks %.2f\n",s1.avg);

    return 0;
}