#include <stdio.h>

int main()
{
    int age = 19;
    int *ptr = &age;
    int _age = 18;
    int *_ptr = &_age;
 
    printf("%u, %u Difference: %u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &age;
    printf("Comparison: %u\n", ptr == _ptr);

    return 0;
}