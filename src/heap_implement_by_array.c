#include <stdio.h>
#include <stdlib.h>
#include "../headers/balanceTree_implement_by_array.h"
void swim(struct treeArray *tree) {
    int index = tree->index - 1;
    int* array = tree->array;
    while (index > 0) {
        if (array[index] < array[(index-1) / 2]) {
//            printf("[%d] <-> [%d]\n", index, (index-1) / 2);
            int temp = array[index];
            array[index] = array[(index-1) / 2];
            array[(index-1) / 2] = temp;
        }

        index = (index-1) /2;
    }
}
void sink(struct treeArray *tree) {
    int lastIndex = tree->index - 1;
    int* array = tree->array;
    int index = 0;
    while (1) {
        int leftChild = index * 2 + 1;
        int rightChild = index * 2 + 2;
        if (leftChild > lastIndex || rightChild > lastIndex) { return; }
        if (array[leftChild] < array[rightChild]) {
            int temp = array[index];
            array[index] = array[leftChild];
            array[leftChild] = temp;
            index = leftChild;
        } else {
            int temp = array[index];
            array[index] = array[rightChild];
            array[rightChild] = temp;
            index = rightChild;
        }
    }

}
void heapInsert(struct treeArray *tree, int data) {
    insertTree(tree, data);
    swim(tree);
}
int heapPop(struct treeArray *tree) {
    int pop = popTree(tree);
    sink(tree);
    return pop;
}