#include <stdint.h> // for uint32_t
#include <stdio.h>
#include <netinet/in.h>

int main(void)
{
    uint32_t n1 = 0;
    uint32_t n2 = 0;
    uint32_t sum = 0;

    FILE* thousandFile = fopen("thousand.bin", "r");
    FILE* fivehundredFILE = fopen("five-hundred.bin", "r");

    fread(&n1, sizeof(uint32_t), 1, thousandFile);
    fread(&n2, sizeof(uint32_t), 1, fivehundredFILE);

    n1 = ntohl(n1);
    n2 = ntohl(n2);
    sum=n1+n2;

    printf("%u(0x%x)+%u(0x%x)=%u(0x%x)\n", n1, n1, n2, n2, sum, sum);

    fclose(thousandFile);
    fclose(fivehundredFILE);

    return 0;



}
