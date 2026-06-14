#include <stdio.h>

// Function to modify the register value
unsigned char modifyRegister(unsigned char reg)
{
    // Set the 3rd bit (bit index 2)
    reg = reg | (1 << 2);

    // Clear the 6th bit (bit index 5)
    reg = reg & ~(1 << 5);

    // Toggle the 1st bit (bit index 0)
    reg = reg ^ (1 << 0);

    // Return the modified value
    return reg;
}

int main()
{
    unsigned char reg = 40; // Example register value

    printf("Original Register Value: %u\n", reg);

    // Call the function
    reg = modifyRegister(reg);

    printf("Modified Register Value: %u\n", reg);

    return 0;
}