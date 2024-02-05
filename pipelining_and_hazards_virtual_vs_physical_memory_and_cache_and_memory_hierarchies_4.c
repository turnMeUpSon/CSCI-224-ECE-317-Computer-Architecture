/*
Program Description: This program does task 4 from Assignment #7:

Author: Ian Miller

Date: 03/01/2024
*/

/*
Comparison:
The statement "the program with the lower L1 cache miss rate has the better (lower) average memory access time (AMAT)" is generally true, as lower L1 cache miss rates usually result in lower AMATs. However, it's not universally true. It depends on the access pattern, cache hierarchy, and memory system characteristics.
In the case of Program A and Program B, Program B has a lower AMAT (51 cycles) compared to Program A (72.4 cycles) despite having a slightly higher L1 cache miss rate. This is because Program B has higher hit rates in subsequent cache levels and faster memory access times overall.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h> 


#define MAIN_MEMORY_MISS_RATE 0.0
#define MAIN_MEMORY_HIT_RATE 1


// Structures
typedef struct ComputerSystem
{
    int l1_processor_cycles;
    int l2_processor_cycles;
    int l3_processor_cycles;
    int main_memory_cycles;
    float l1_cache_miss_rate;
    float l2_cache_miss_rate;
    float l3_cache_miss_rate;
    float main_memory_miss_rate;
    float l1_cache_hit_rate;
    float l2_cache_hit_rate;
    float l3_cache_hit_rate;
    float main_memory_hit_rate;
    float average_memory_access_time;
} ComputerSystem;


// Prototypes
float calculate_l1_hit_rate(ComputerSystem* pc);
float calculate_l2_hit_rate(ComputerSystem* pc);
float calculate_l3_hit_rate(ComputerSystem* pc);
float calculate_l1_miss_rate(ComputerSystem* pc);
float calculate_l2_miss_rate(ComputerSystem* pc);
float calculate_l3_miss_rate(ComputerSystem* pc);
float calculate_main_memory_hit_rate(ComputerSystem* pc);
float calculate_main_memory_miss_rate(ComputerSystem* pc);
float calculate_average_memory_access_time(ComputerSystem* pc);
void pc1_optimization(ComputerSystem* pc);
void find_min_l1_hit_rate(ComputerSystem* pc);


int main()
{   
    ComputerSystem *pc1, *pc2, *pc2_optimized;

    // Allocate memory for each cache structure
    pc1 = (ComputerSystem*)malloc(sizeof(ComputerSystem));
    pc2 = (ComputerSystem*)malloc(sizeof(ComputerSystem));
    pc2_optimized = (ComputerSystem*)malloc(sizeof(ComputerSystem));

    // Check if memory allocation was successful
    if (pc1 == NULL || pc2 == NULL || pc2_optimized == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Setup pc1
    pc1->l1_cache_miss_rate = 0.04;
    pc1->l2_cache_miss_rate = 0.3;
    pc1->l3_cache_miss_rate = 0.5;
    pc1->main_memory_miss_rate = MAIN_MEMORY_MISS_RATE;
    pc1->l1_processor_cycles = 3;
    pc1->l2_processor_cycles = 10;
    pc1->l3_processor_cycles = 30;
    pc1->main_memory_cycles = 120;

    printf("\nPC 1: L1 preocessor cycles = %d\n", pc1->l1_processor_cycles);
    printf("PC 1: L2 preocessor cycles = %d\n", pc1->l2_processor_cycles);
    printf("PC 1: L3 preocessor cycles = %d\n", pc1->l3_processor_cycles);
    printf("PC 1: Main memory preocessor cycles = %d\n", pc1->main_memory_cycles);
    printf("PC 1: L1 cache miss rate = %.2f\n", pc1->l1_cache_miss_rate);
    printf("PC 1: L2 cache miss rate = %.2f\n", pc1->l2_cache_miss_rate);
    printf("PC 1: L3 cache miss rate = %.2f\n", pc1->l3_cache_miss_rate);
    printf("PC 1: Main memory miss rate = %.2f\n", pc1->main_memory_miss_rate);
    printf("PC 1: L1 cache hit rate = %.2f\n", calculate_l1_hit_rate(pc1));
    printf("PC 1: L2 cache hit rate = %.2f\n", calculate_l2_hit_rate(pc1));
    printf("PC 1: L3 cache hit rate = %.2f\n", calculate_l3_hit_rate(pc1));
    printf("PC 1: Main memory hit rate = %.2f\n", calculate_main_memory_hit_rate(pc1));
    printf("PC 1: Average memory access time (AMAT) = %.2f\n", calculate_average_memory_access_time(pc1));
    printf("To achieve an 85 percents hit rate in the L2 cache, the new L2 miss rate would be 15 percents. We can calculate the new AMAT using the updated miss rate for the L2 cache and compare it with the original AMAT to compute the speedup: \n");
    pc1_optimization(pc1);
    printf("After optimizarion L2 cache miss rate now = %.2f\n", pc1->l2_cache_miss_rate);
    printf("After optimizarion L2 cache hit rate now = %.2f\n", calculate_l2_hit_rate(pc1));


    // Setup pc2
    pc2->l1_cache_hit_rate = 0.93;
    pc2->l2_cache_hit_rate = 0.80;
    pc2->l3_cache_hit_rate = 0.65;
    pc2->main_memory_hit_rate = MAIN_MEMORY_HIT_RATE;
    pc2->l1_processor_cycles = 3;
    pc2->l2_processor_cycles = 10;
    pc2->l3_processor_cycles = 30;
    pc2->main_memory_cycles = 120;

    printf("\nPC 2: L1 preocessor cycles = %d\n", pc2->l1_processor_cycles);
    printf("PC 2: L2 preocessor cycles = %d\n", pc2->l2_processor_cycles);
    printf("PC 2: L3 preocessor cycles = %d\n", pc2->l3_processor_cycles);
    printf("PC 2: Main memory preocessor cycles = %d\n", pc2->main_memory_cycles);
    printf("PC 2: L1 cache miss rate = %.2f\n", calculate_l1_miss_rate(pc2));
    printf("PC 2: L2 cache miss rate = %.2f\n", calculate_l2_miss_rate(pc2));
    printf("PC 2: L3 cache miss rate = %.2f\n", calculate_l3_miss_rate(pc2));
    printf("PC 2: Main memory miss rate = %.2f\n", calculate_main_memory_miss_rate(pc2));
    printf("PC 2: L1 cache hit rate = %.2f\n", pc2->l1_cache_hit_rate);
    printf("PC 2: L2 cache hit rate = %.2f\n", pc2->l2_cache_hit_rate);
    printf("PC 2: L3 cache hit rate = %.2f\n", pc2->l3_cache_hit_rate);
    printf("PC 2: Main memory hit rate = %.2f\n", pc2->main_memory_hit_rate);
    printf("PC 2: Average memory access time (AMAT) = %.2f\n", calculate_average_memory_access_time(pc2));

    
    // Setup pc2
    pc2_optimized->l2_cache_hit_rate = 0.80;
    pc2_optimized->l3_cache_hit_rate = 0.65;
    pc2_optimized->main_memory_hit_rate = MAIN_MEMORY_HIT_RATE;
    pc2_optimized->l1_processor_cycles = 4;
    pc2_optimized->l2_processor_cycles = 10;
    pc2_optimized->l3_processor_cycles = 30;
    pc2_optimized->main_memory_cycles = 120;
    pc2_optimized->average_memory_access_time = 92.65;

    printf("\nPC 2 optimized: L1 preocessor cycles = %d\n", pc2_optimized->l1_processor_cycles);
    printf("PC 2 optimized: L2 preocessor cycles = %d\n", pc2_optimized->l2_processor_cycles);
    printf("PC 2 optimized: L3 preocessor cycles = %d\n", pc2_optimized->l3_processor_cycles);
    printf("PC 2 optimized: Main memory preocessor cycles = %d\n", pc2_optimized->main_memory_cycles);
    printf("PC 2 optimized: L1 cache miss rate = %.2f\n", calculate_l1_miss_rate(pc2_optimized));
    printf("PC 2 optimized: L2 cache miss rate = %.2f\n", calculate_l2_miss_rate(pc2_optimized));
    printf("PC 2 optimized: L3 cache miss rate = %.2f\n", calculate_l3_miss_rate(pc2_optimized));
    printf("PC 2 optimized: Main memory miss rate = %.2f\n", calculate_main_memory_miss_rate(pc2_optimized));
    printf("PC 2 optimized: L1 cache hit rate = %.2f\n", pc2_optimized->l1_cache_hit_rate);
    printf("PC 2 optimized: L2 cache hit rate = %.2f\n", pc2_optimized->l2_cache_hit_rate);
    printf("PC 2 optimized: L3 cache hit rate = %.2f\n", pc2_optimized->l3_cache_hit_rate);
    printf("PC 2 optimized: Main memory hit rate = %.2f\n", pc2_optimized->main_memory_hit_rate);
    printf("PC 2 optimized: Average memory access time (AMAT) = %.2f\n", pc2_optimized->average_memory_access_time);

    // Optimized code for PC 2 where pc2->l1_processor_cycles = 4 and AMAT still the same and we need to find min L1 cache hit rate
    find_min_l1_hit_rate(pc2_optimized);

    return 0;
}


float calculate_l1_hit_rate(ComputerSystem* pc)
{
    pc->l1_cache_hit_rate = 1 - pc->l1_cache_miss_rate;
    return pc->l1_cache_hit_rate;
}


float calculate_l1_miss_rate(ComputerSystem* pc)
{
    pc->l1_cache_miss_rate = 1 - pc->l1_cache_hit_rate;
    return pc->l1_cache_miss_rate;
}


float calculate_l2_hit_rate(ComputerSystem* pc)
{
    pc->l2_cache_hit_rate = 1 - pc->l2_cache_miss_rate;
    return pc->l2_cache_hit_rate;
}


float calculate_l2_miss_rate(ComputerSystem* pc)
{
    pc->l2_cache_miss_rate = 1 - pc->l2_cache_hit_rate;
    return pc->l2_cache_miss_rate;
}


float calculate_l3_hit_rate(ComputerSystem* pc)
{
    pc->l3_cache_hit_rate = 1 - pc->l3_cache_miss_rate;
    return pc->l3_cache_hit_rate;
}


float calculate_l3_miss_rate(ComputerSystem* pc)
{
    pc->l3_cache_miss_rate = 1 - pc->l3_cache_hit_rate;
    return pc->l3_cache_miss_rate;
}


float calculate_main_memory_hit_rate(ComputerSystem* pc)
{
    pc->main_memory_hit_rate = 1 - pc->main_memory_miss_rate;
    return pc->main_memory_hit_rate;
}


float calculate_main_memory_miss_rate(ComputerSystem* pc)
{
    pc->main_memory_miss_rate = 1 - pc->main_memory_hit_rate;
    return pc->main_memory_miss_rate;
}


float calculate_average_memory_access_time(ComputerSystem* pc)
{
    // AMAT = L1 cycle + L1 hit rate * (L2 cycle + L2 hit rate * (L3 cycle + L3 hit rate * memory cycle))
    pc->average_memory_access_time = pc->l1_processor_cycles + pc->l1_cache_hit_rate * (pc->l2_processor_cycles + pc->l2_cache_hit_rate * (pc->l3_processor_cycles + pc->l3_cache_hit_rate * pc->main_memory_cycles));
    return pc->average_memory_access_time;
}


void find_min_l1_hit_rate(ComputerSystem* pc)
{
    float min_l1_hit_rate;
    min_l1_hit_rate = (pc->average_memory_access_time - pc->l1_processor_cycles) / (pc->l2_processor_cycles + pc->l2_cache_hit_rate * (pc->l3_processor_cycles + pc->l3_cache_hit_rate * pc->main_memory_cycles));
    printf("L1 minimum hit rate for PC 2 = %.2f\n", min_l1_hit_rate);
}


void pc1_optimization(ComputerSystem* pc)
{
    /*
        To achieve an 85% hit rate in the L2 cache, the new L2 miss rate would be 15%. 
        We can calculate the new AMAT using the updated miss rate for the L2 cache and compare it with the original AMAT to compute the speedup.
    */
    float res;

    pc->l2_cache_miss_rate = 0.15;
    printf("Successfully optimized L2 cache\n");

    res = calculate_average_memory_access_time(pc);

    printf("AMAT in PC 1 now = %.2f\n", res);
}