#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;  // 'ptr' holds the address of 'age'

     printf("age : %d\n",age);
     printf("address of age:%p\n",&age);
    printf("pointer value: %p\n",ptr);
    *ptr = 34;
    printf("value at prt %d\n",*ptr);
    printf("value of age:%d\n",age);
    printf("address of age :%p\n",&age);
    return 0;
}