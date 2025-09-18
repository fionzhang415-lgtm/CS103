#include <stdio.h>

int main()
{
    int j = 1;
    j = j++ << 2 + 3 << --j;
    printf(" i = %d\n", j );
    return 0;
}
