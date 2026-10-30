#include <stdio.h>
struct Student
{
int roll;
char name[30];
float marks;
};
int main(void)
{
struct Student s1 = {101,"Abir", 90.6f};
printf("Student Details\n");
printf("Roll Number: %d\n", s1.roll);
printf("Name: %s\n", s1.name);
printf(";Marks: %.2f\n", s1.marks);
return 0;
}