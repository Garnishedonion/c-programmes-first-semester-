#include <stdio.h>
struct Student
{
 int roll;
 float marks;
};
struct Student getStudent(void)
{
 struct Student s;
 s.roll = 101;
 s.marks = 92.5f;
 return s;
}
int main(void)
{
 struct Student s1;
 s1 = getStudent();
 printf("Roll Number: %d\n", s1.roll);
 printf("Marks: %.2f\n", s1.marks);
 return 0;
}