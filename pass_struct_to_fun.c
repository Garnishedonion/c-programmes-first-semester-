#include <stdio.h>
struct Student
{
 int roll;
 float marks;
};
void display(struct Student s)
{
 printf("Roll Number: %d\n", s.roll);
 printf("Marks: %.2f\n", s.marks);
}
int main(void)
{
 struct Student s1 = {101, 88.5f};
 display(s1);
 return 0;
}
