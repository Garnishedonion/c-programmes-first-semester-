#include <stdio.h>
struct Student
{
 int roll;
 float marks;
};
void updateMarks(struct Student *p)
{
 p->marks = 95.0f;
}
int main(void)
{
 struct Student s = {101, 80.0f};
 printf("Before update: %.2f\n", s.marks);
 updateMarks(&s);
 printf("After update: %.2f\n", s.marks);
 return 0;
}