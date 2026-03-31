#include <stdio.h>

int add(int a, int b)
{
        return a+b;
}

int main(void)
{
        printf("%d + %d = %d\n", 1, 2, add(1,2));
        printf("hello world\n");
        return 0;
}

// this is to check origin and local main diffs

//THIS IS PULL TEST