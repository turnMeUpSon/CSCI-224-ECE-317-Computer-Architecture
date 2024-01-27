/*
Program Description: This program does 

Author: Ian Miller

Date: 27/01/2024
*/


#include <stdio.h>


#define ROWS 3
#define COLS 3


// Prototypes
void applySmoothing(int p[][COLS], int y, int x);


int main()
{
     int pixels[ROWS][COLS] = {
        { 10, 20, 30 },
        { 40, 50, 60 },
        { 70, 80, 90 }
    };

    // Apply smoothing to all pixels except the boundary pixels
    for (int y = 1; y < ROWS - 1; y++) {
        for (int x = 1; x < COLS - 1; x++) {
            applySmoothing(pixels, y, x);
        }
    }

    // Print the smoothed pixels
    printf("Smoothed pixels:\n");
    for (int y = 0; y < ROWS; y++) {
        for (int x = 0; x < COLS; x++) {
            printf("%d\t", pixels[y][x]);
        }
        printf("\n");
    }

    return 0;
}


void applySmoothing(int p[][COLS], int y, int x)
{
    p[y][x] = (p[y][x] + (p[y][x-1] >> 1) + (p[y][x+1] >> 1) + (p[y-1][x] >> 1) + (p[y+1][x] >> 1) + 2) >> 2;
}