#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer Cu;
    Cu.cpu_speed_GHz = 1.2;
    Cu.ram_size_GB = 2;
    Cu.bits = 12;

    printf("The computer has %.1f GHz, and %d ram, and %d bits.\n\n", Cu.cpu_speed_GHz, Cu.ram_size_GB, Cu.bits);

    Notebook No;
    No.cpu_speed_GHz = 1.4;
    No.ram_size_GB = 4;
    No.bits = 24;

    printf("The computer has %.1f GHz, and %d ram, and %d bits.", No.cpu_speed_GHz, No.ram_size_GB, No.bits);

    return 0;
}