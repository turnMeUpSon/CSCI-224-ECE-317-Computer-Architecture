/*
Program Description: This program does task 1 from Assignment #7:

Author: Ian Miller

Date: 03/01/2024
*/


#include <stdio.h>
#include <stdlib.h>


#define PAGE_SIZE 64


int main()
{   
    char virtual_address_1_part_1[] = "0x02";
    char virtual_address_1_part_2[] = "0x0AD";
    char *endptr_address_1;
    int vpn_address_1;
    int offset_address_1;
    int physical_address_1;

    char virtual_address_2_part_1[] = "0x01";
    char virtual_address_2_part_2[] = "0x5A";
    char *endptr_address_2;
    int vpn_address_2;
    int offset_address_2;
    int physical_address_2;

    char virtual_address_3_part_1[] = "0x01";
    char virtual_address_3_part_2[] = "0x1E";
    char *endptr_address_3;
    int vpn_address_3;
    int offset_address_3;
    int physical_address_3;

    vpn_address_1 = strtol(virtual_address_1_part_1, &endptr_address_1, 16);
    offset_address_1 = strtol(virtual_address_1_part_2, &endptr_address_1, 16);

    vpn_address_2 = strtol(virtual_address_2_part_1, &endptr_address_2, 16);
    offset_address_2 = strtol(virtual_address_2_part_2, &endptr_address_2, 16);

    vpn_address_3 = strtol(virtual_address_3_part_1, &endptr_address_3, 16);
    offset_address_3 = strtol(virtual_address_3_part_2, &endptr_address_3, 16);


    // Check if conversion was successful
    if (endptr_address_1 == virtual_address_1_part_1 || *endptr_address_1 != '\0') {
        printf("Invalid hexadecimal string\n");
        return 1;
    }
    if (endptr_address_1 == virtual_address_1_part_2 || *endptr_address_1 != '\0') {
        printf("Invalid hexadecimal string\n");
        return 1;
    }
    if (endptr_address_2 == virtual_address_2_part_1 || *endptr_address_2 != '\0') {
        printf("Invalid hexadecimal string\n");
        return 1;
    }
    if (endptr_address_2 == virtual_address_2_part_2 || *endptr_address_2 != '\0') {
        printf("Invalid hexadecimal string\n");
        return 1;
    }
    if (endptr_address_3 == virtual_address_3_part_1 || *endptr_address_3 != '\0') {
        printf("Invalid hexadecimal string\n");
        return 1;
    }
    if (endptr_address_3 == virtual_address_3_part_2 || *endptr_address_3 != '\0') {
        printf("Invalid hexadecimal string\n");
        return 1;
    }

    // Print the decimal value
    printf("Decimal value of %s is %ld\n", virtual_address_1_part_1, vpn_address_1);
    printf("Decimal value of %s is %ld\n", virtual_address_1_part_2, offset_address_1);
    printf("Decimal value of %s is %ld\n", virtual_address_2_part_1, vpn_address_2);
    printf("Decimal value of %s is %ld\n", virtual_address_2_part_2, offset_address_2);
    printf("Decimal value of %s is %ld\n", virtual_address_3_part_1, vpn_address_3);
    printf("Decimal value of %s is %ld\n", virtual_address_3_part_2, offset_address_3);

    physical_address_1 = (2 << 6) + offset_address_1;
    physical_address_2 = (6 << 6) + offset_address_2;
    physical_address_3 = (6 << 6) + offset_address_3;

    printf("physical_address_1 is %d\n", physical_address_1);
    printf("physical_address_2 is %d\n", physical_address_2);
    printf("physical_address_3 is %d\n", physical_address_3);

    return 0;
}