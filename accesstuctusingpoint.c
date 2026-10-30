#include <stdio.h>
struct Student
{
 int roll;
 float marks;
};
int main(void)
{
 struct Student s = {101, 90.5f};
 struct Student *ptr = &s;
 printf("Roll Number: %d\n", ptr->roll);
 printf("Marks: %.2f\n", ptr->marks);
 ptr->marks = 95.0f;
 printf("Updated Marks: %.2f\n", s.marks);
 return 0;
}