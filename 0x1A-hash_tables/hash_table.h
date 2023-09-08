#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Defines the HashTable item.

typedef struct ht_item
{
    char *key;
    char *value;
} ht_item;

typedef struct hash_table_t
{
    ht_item **items;
    int size;
    int count;
} hash_table_t

#endif
