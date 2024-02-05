/*
Program Description: This program does task 3 from Assignment #7:

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
    int number_cache_sets;
} Cache;


// Prototypes
int find_number_cache_sets(Cache* cache);
int find_tag_bits(Cache* cache);
int find_set_index_bits(Cache* cache);
int find_block_offset_bits(Cache* cache);
int find_cache_size(Cache* cache);


int main()
{
    Cache* cache1;

    // Allocate memory for each cache structure
    cache1 = (Cache*)malloc(sizeof(Cache));

    // Check if memory allocation was successful
    if (cache1 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Setup cache 1
    cache1->number_of_physical_address_bits = 13;
    cache1->number_cache_sets = 8;
    cache1->block_size = 4;
    cache1->associativity = 4;

    printf("\nCache 1: number of physical address bits = %d\n", cache1->number_of_physical_address_bits);
    printf("Cache 1: cache size = %d\n", find_cache_size(cache1));
    printf("Cache 1: block size = %d\n", cache1->block_size);
    printf("Cache 1: associativity = %d\n", cache1->associativity);
    printf("Cache 1: the number of cache sets = %d\n", find_number_cache_sets(cache1));
    printf("Cache 1: the number of tag bits = %d\n", find_tag_bits(cache1));
    printf("Cache 1: the number of set index bits = %d\n", find_set_index_bits(cache1));
    printf("Cache 1: is the number of block offset bits = %d\n", find_block_offset_bits(cache1));
    
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


int find_cache_size(Cache* cache)
{
    cache->cache_size = cache->block_size * cache->number_cache_sets * cache->associativity;
    return cache->cache_size;
}


/* b.
To determine the cache entry accessed and whether a cache miss occurs, we need to interpret the memory reference in the context of the cache's structure.

Given the cache parameters provided in Problem 6.31:

Cache is four-way set associative (E = 4)
Block size (B) = 4 bytes
Number of sets (S) = 8
Let's break down the address format:

A. Address format (one bit per box):

      12    11    10    9    8    7    6    5    4    3    2    1    0
     -----------------------------------------------------------------
    | Tag  | Set Index  |         Block Offset         |
     ---------------------------------------------------
Now, let's analyze the memory reference at address 0x071A:

Block offset (CO): The block offset specifies the byte within the block. Since the block size is 4 bytes, the block offset is 2 bits, and for the address 0x071A, the block offset is 10 in binary, representing the third byte within the block.
Set Index (CI): The set index determines which set the address maps to in the cache. With 3 bits for the set index, for the address 0x071A, the set index is 001 in binary, representing set 1.
Cache Tag (CT): The cache tag identifies the block of memory stored in the cache. For the address 0x071A, the tag would be the remaining bits, which is 0111 in binary.
Now, we need to check the cache entry corresponding to set 1 with tag 0111. If there's a cache hit, we return the cache byte value; otherwise, it's a cache miss.

B:
Block offset (CO) 0x2
Index (CI) 0x1
Cache tag (CT) 0x7
Cache hit? (Y/N)
Cache byte returned 0x
*/

/* c.
Cache is four-way set associative (E = 4)
Block size (B) = 4 bytes
Number of sets (S) = 8
A. Address format:

sql
Copy code
     12    11    10    9    8    7    6    5    4    3    2    1    0
    -----------------------------------------------------------------
   | Tag  | Set Index  |         Block Offset         |
    ---------------------------------------------------
Address: 0x13DE

Block Offset (CO):

Block size is 4 bytes, so the block offset is 2 bits.
For address 0x13DE, the block offset is 0x2 in hexadecimal, or 0010 in binary.
Set Index (CI):

Number of sets is 8, so the set index is 3 bits.
For address 0x13DE, the set index is 0x7 in hexadecimal, or 0111 in binary.
Cache Tag (CT):

The remaining bits after block offset and set index are the cache tag.
For address 0x13DE, the cache tag is 0x13D in hexadecimal, or 0001 0011 1101 in binary.
Given the memory reference parameters:

B. Memory reference:

scss
Copy code
Block offset (CO) 0x2
Index (CI) 0x7
Cache tag (CT) 0x13D
Cache hit? (Y/N)
Cache byte returned 0x
*/

/* d.
To solve Problem #6.32 for the address 0x16C9, we'll follow the same approach as before. We'll break down the address into its components: block offset, set index, and cache tag. Then, we'll determine the cache entry accessed and whether there's a cache hit or miss.

Given the cache parameters provided in Problem #6.31:

Cache is four-way set associative (E = 4)
Block size (B) = 4 bytes
Number of sets (S) = 8
A. Address format:

sql
Copy code
     12    11    10    9    8    7    6    5    4    3    2    1    0
    -----------------------------------------------------------------
   | Tag  | Set Index  |         Block Offset         |
    ---------------------------------------------------
Address: 0x16C9

Block Offset (CO):

Block size is 4 bytes, so the block offset is 2 bits.
For address 0x16C9, the block offset is 0x1 in hexadecimal, or 0001 in binary.
Set Index (CI):

Number of sets is 8, so the set index is 3 bits.
For address 0x16C9, the set index is 0x3 in hexadecimal, or 0011 in binary.
Cache Tag (CT):

The remaining bits after block offset and set index are the cache tag.
For address 0x16C9, the cache tag is 0x6B in hexadecimal, or 0110 1011 in binary.
Given the memory reference parameters:

B. Memory reference:

scss
Copy code
Block offset (CO) 0x1
Index (CI) 0x3
Cache tag (CT) 0x6B
Cache hit? (Y/N)
Cache byte returned 0x
*/