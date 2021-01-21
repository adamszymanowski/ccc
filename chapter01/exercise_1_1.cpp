#include <cstdio>

int absolute_value(int x) 
{
  
  if (x < 0)
  {
      return -x;
  }
  else
  {
    return x;
  }
  
}

int sum(int a, int b)
{
    return a + b;
}

void run_1st_example(int my_num)
{
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}

void run_2nd_example(int a, int b)
{
    printf("%d + %d = %d.\n", a, b, sum(a, b));
}

int main() {
    run_1st_example(0);
    run_1st_example(-20);
    run_1st_example(10);

    run_2nd_example(1, 1);
    run_2nd_example(2, 2);
    run_2nd_example(4, -4);
    run_2nd_example(0, -7);
}