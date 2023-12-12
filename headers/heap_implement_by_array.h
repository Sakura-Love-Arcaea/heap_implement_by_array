#include "balanceTree_implement_by_array.h"

#ifndef DATA_STRUCTURE_HEAP_IMPLEMENT_BY_ARRAY_H
#define DATA_STRUCTURE_HEAP_IMPLEMENT_BY_ARRAY_H

void swim(struct treeArray *tree);
void heapInsert(struct treeArray *tree, int data);
void sink(struct treeArray *tree);
int heapPop(struct treeArray *tree);
#endif //DATA_STRUCTURE_HEAP_IMPLEMENT_BY_ARRAY_H
