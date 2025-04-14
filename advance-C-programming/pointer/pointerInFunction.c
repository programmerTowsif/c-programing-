#include <stdio.h>
void swap(int *a, int *b)
{
    int tepm = *a;
    *a = *b;

    *b = tepm;
}
int main()
{
    int x = 5, y = 10;
    printf("x = %d , y = %d\n", x, y);
    printf("%p", &x);
    swap(&x, &y);
    printf("x = %d , y = %d\n", x, y);
    return 0;
}