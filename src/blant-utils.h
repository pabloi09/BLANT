#ifndef BLANT_UTILS_H
#define BLANT_UTILS_H

#include "blant.h"

typedef struct nwhn { // this struct is needed for sorting
    int node;
    int heur;
    char *name;
} node_whn;

Boolean arrayIn(unsigned *arr, int size, int item);
void printIntArray(int* arr, int n, char* name);
void ExtractPerm(unsigned char perm[_k], int i);
void InvertPerm(unsigned char inverse[_k], unsigned const char perm[_k]);
TINY_GRAPH *TinyGraphInducedFromGraph(TINY_GRAPH *Gv, GRAPH *G, unsigned *Varray);
int getMaximumIntNumber(int K);
int asccompFunc(const foint i, const foint j);
int descompFunc(const void *a, const void *b);
int nwhn_des_alph_comp_func(const void *a, const void *b);
int nwhn_des_rev_comp_func(const void *a, const void *b);
int nwhn_asc_alph_comp_func(const void *a, const void *b);
int nwhn_asc_rev_comp_func(const void *a, const void *b);
void SetGlobalCanonMaps(void);
void LoadMagicTable(void);

#endif
