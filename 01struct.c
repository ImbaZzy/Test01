#include <stdio.h>
typedef struct
{
int age;
float height;
char name[20];
} per;
int main()
{
per person1 = {10,1.36f,"abc"};
printf("年龄是%d\n",person1.age);
return 0;
};
