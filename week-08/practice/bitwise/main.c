#include <stdio.h>

int main()
{
    int szia = 2;
    szia = szia << 1; // szia <<= 1
    printf("szia: %d\n", szia);

    szia = szia >> 2; // szia >>= 2
    printf("szia: %d\n", szia);


    int retek = 4;
    int repa = 3;

    retek = retek & repa;
    printf("retek: %d\n", retek);

    int odr = 56449;
    int mask = 0xFFFFFFFE;

    odr &= mask;
    printf("odr: %d\n", odr);

    int mask2 = 1;
    odr |= mask2;
    printf("odr: %d\n", odr);

    return 0;
}