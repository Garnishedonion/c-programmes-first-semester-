#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("enter name\n");
    scanf("%29s",&s[i].name);

    printf("enter roll number\n");
    scanf("%d",&s[i].roll);

    printf("enter marks: \n");
    scanf("%f",&s[i].marks);

    }

    printf("----------records----------\n");

    for(i=0;i<3;i++)
    {
   printf("student details\n");
    printf("roll no. %d\n",s[i].roll);
    printf("name : %s\n",s[i].name);
    printf("marks %.2f\n",s[i].marks);
    }
    return 0;
}