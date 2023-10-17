#include <stdio.h>;
void foo( int[] );
int main()
{
int ary[4] = {1, 2, 3, 4};
foo(ary);
printf("%d ", ary[0]);
}
void foo(int p[4])
{
int i = 10;
int j = 20;
p = &i;
p=&j;
printf("%d ", p[0]);
printf("%d ",p[1]);
} 