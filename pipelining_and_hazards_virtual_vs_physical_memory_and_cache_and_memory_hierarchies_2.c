/*
Program Description: This program does task 2 from Assignment #7:

Author: Ian Miller

Date: 03/01/2024
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h> 


// Structure
typedef struct Cache
{
    int number_of_physical_address_bits;
    int cache_size;
    int block_size;
    int associativity;
} Cache;


// Prototypes
int find_number_cache_sets(Cache* cache);
int find_tag_bits(Cache* cache);
int find_set_index_bits(Cache* cache);
int find_block_offset_bits(Cache* cache);


int main()
{
    // Declare pointers to Cache structures
    Cache *cache1, *cache2, *cache3, *cache4, *cache5, *cache6;

    // Allocate memory for each cache structure
    cache1 = (Cache*)malloc(sizeof(Cache));
    cache2 = (Cache*)malloc(sizeof(Cache));
    cache3 = (Cache*)malloc(sizeof(Cache));
    cache4 = (Cache*)malloc(sizeof(Cache));
    cache5 = (Cache*)malloc(sizeof(Cache));
    cache6 = (Cache*)malloc(sizeof(Cache));

    // Check if memory allocation was successful
    if (cache1 == NULL || cache2 == NULL || cache3 == NULL || cache4 == NULL || cache5 == NULL || cache6 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Setup cache 1
    cache1->number_of_physical_address_bits = 32;
    cache1->cache_size = 1024;
    cache1->block_size = 4;
    cache1->associativity = 4;

    printf("\nCache 1: number of physical address bits = %d\n", cache1->number_of_physical_address_bits);
    printf("Cache 1: cache size = %d\n", cache1->cache_size);
    printf("Cache 1: block size = %d\n", cache1->block_size);
    printf("Cache 1: associativity = %d\n", cache1->associativity);
    printf("Cache 1: the number of cache sets = %d\n", find_number_cache_sets(cache1));
    printf("Cache 1: the number of tag bits = %d\n", find_tag_bits(cache1));
    printf("Cache 1: the number of set index bits = %d\n", find_set_index_bits(cache1));
    printf("Cache 1: is the number of block offset bits = %d\n", find_block_offset_bits(cache1));

    // Setup cache 2
    cache2->number_of_physical_address_bits = 32;
    cache2->cache_size = 1024;
    cache2->block_size = 4;
    cache2->associativity = 256;

    printf("\nCache 2: number of physical address bits = %d\n", cache2->number_of_physical_address_bits);
    printf("Cache 2: cache size = %d\n", cache2->cache_size);
    printf("Cache 2: block size = %d\n", cache2->block_size);
    printf("Cache 2: associativity = %d\n", cache2->associativity);
    printf("Cache 2: the number of cache sets = %d\n", find_number_cache_sets(cache2));
    printf("Cache 2: the number of tag bits = %d\n", find_tag_bits(cache2));
    printf("Cache 2: the number of set index bits = %d\n", find_set_index_bits(cache2));
    printf("Cache 2: is the number of block offset bits = %d\n", find_block_offset_bits(cache2));

    // Setup cache 3
    cache3->number_of_physical_address_bits = 32;
    cache3->cache_size = 1024;
    cache3->block_size = 8;
    cache3->associativity = 1;

    printf("\nCache 3: number of physical address bits = %d\n", cache3->number_of_physical_address_bits);
    printf("Cache 3: cache size = %d\n", cache3->cache_size);
    printf("Cache 3: block size = %d\n", cache3->block_size);
    printf("Cache 3: associativity = %d\n", cache3->associativity);
    printf("Cache 3: the number of cache sets = %d\n", find_number_cache_sets(cache3));
    printf("Cache 3: the number of tag bits = %d\n", find_tag_bits(cache3));
    printf("Cache 3: the number of set index bits = %d\n", find_set_index_bits(cache3));
    printf("Cache 3: is the number of block offset bits = %d\n", find_block_offset_bits(cache3));

    // Setup cache 4
    cache4->number_of_physical_address_bits = 32;
    cache4->cache_size = 1024;
    cache4->block_size = 8;
    cache4->associativity = 128;

    printf("\nCache 4: number of physical address bits = %d\n", cache4->number_of_physical_address_bits);
    printf("Cache 4: cache size = %d\n", cache4->cache_size);
    printf("Cache 4: block size = %d\n", cache4->block_size);
    printf("Cache 4: associativity = %d\n", cache4->associativity);
    printf("Cache 4: the number of cache sets = %d\n", find_number_cache_sets(cache4));
    printf("Cache 4: the number of tag bits = %d\n", find_tag_bits(cache4));
    printf("Cache 4: the number of set index bits = %d\n", find_set_index_bits(cache4));
    printf("Cache 4: is the number of block offset bits = %d\n", find_block_offset_bits(cache4));

    // Setup cache 5
    cache5->number_of_physical_address_bits = 32;
    cache5->cache_size = 1024;
    cache5->block_size = 32;
    cache5->associativity = 1;

    printf("\nCache 5: number of physical address bits = %d\n", cache5->number_of_physical_address_bits);
    printf("Cache 5: cache size = %d\n", cache5->cache_size);
    printf("Cache 5: block size = %d\n", cache5->block_size);
    printf("Cache 5: associativity = %d\n", cache5->associativity);
    printf("Cache 5: the number of cache sets = %d\n", find_number_cache_sets(cache5));
    printf("Cache 5: the number of tag bits = %d\n", find_tag_bits(cache5));
    printf("Cache 5: the number of set index bits = %d\n", find_set_index_bits(cache5));
    printf("Cache 5: is the number of block offset bits = %d\n", find_block_offset_bits(cache5));

    // Setup cache 6
    cache6->number_of_physical_address_bits = 32;
    cache6->cache_size = 1024;
    cache6->block_size = 32;
    cache6->associativity = 4;

    printf("\nCache 6: number of physical address bits = %d\n", cache6->number_of_physical_address_bits);
    printf("Cache 6: cache size = %d\n", cache6->cache_size);
    printf("Cache 6: block size = %d\n", cache6->block_size);
    printf("Cache 6: associativity = %d\n", cache6->associativity);
    printf("Cache 6: the number of cache sets = %d\n", find_number_cache_sets(cache6));
    printf("Cache 6: the number of tag bits = %d\n", find_tag_bits(cache6));
    printf("Cache 6: the number of set index bits = %d\n", find_set_index_bits(cache6));
    printf("Cache 6: is the number of block offset bits = %d\n", find_block_offset_bits(cache6));
    
    return 0;
}


int find_number_cache_sets(Cache* cache)
{
    int number_cache_sets;
    number_cache_sets = cache->cache_size / (cache->block_size * cache->associativity);
    return number_cache_sets;
}


int find_block_offset_bits(Cache* cache)
{
    int block_offset_bits;
    block_offset_bits = log2(cache->block_size);
    return block_offset_bits;
}


int find_tag_bits(Cache* cache)
{
    int number_tag_bits;
    number_tag_bits = cache->number_of_physical_address_bits - (find_set_index_bits(cache) + find_block_offset_bits(cache));
    return number_tag_bits;
}


int find_set_index_bits(Cache* cache)
{
    int set_index_bits;
    set_index_bits = log2(find_number_cache_sets(cache));
    return set_index_bits;
}