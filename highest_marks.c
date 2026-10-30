#include <stdio.h>
struct Student
{
 int roll;
 char name[30];
 float marks;
};
int main(void)
{
 struct Student s[3];
 int i, topper = 0;
 for (i = 0; i < 3; i++)
 {
 printf("Enter roll, name and marks: ");
 scanf("%d %29s %f",
 &s[i].roll, s[i].name, &s[i].marks);
 }
 for (i = 1; i < 3; i++)
 {
 if (s[i].marks > s[topper].marks)
 {
 topper = i;
 }
 }
 printf("\nTopper Details\n");
 printf("Roll: %d\n", s[topper].roll);
 printf("Name: %s\n", s[topper].name);
 printf("Marks: %.2f\n", s[topper].marks);
 return 0;
}