#include <stdio.h>
#include <stdlib.h>
#include "../headers/balanceTree_implement_by_array.h"
void heapify(struct treeArray *tree) {
    int index = tree->index - 1;
    int* array = tree->array;
    while (index > 0) {
        if (array[index] < array[(index-1) / 2]) {
            printf("[%d] <-> [%d]\n", index, (index-1) / 2);
            int temp = array[index];
            array[index] = array[(index-1) / 2];
            array[(index-1) / 2] = temp;
        }

        index = (index-1) /2;
    }
}

void heapInsert(struct treeArray *tree, int data) {
    insertTree(tree, data);
    heapify(tree);
}