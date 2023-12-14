#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/balanceTree_implement_by_array.h"

struct treeArray* createTreeArray(int size) {
    struct treeArray *tree = (struct treeArray *) malloc(sizeof(struct treeArray));
    tree->array = (int *) malloc(sizeof(int) * size);
    memset(tree->array, 0, size);
    tree->index = 0;
    tree->size = size;
    return tree;
}

void insertTree(struct treeArray *tree, int data) {
    int *array = tree->array;
    array[tree->index++] = data;
}
int popTree(struct treeArray *tree) {
    int *array = tree->array;
    int index = --tree->index;
    int pop = array[0];
    array[0] = array[index];
    return pop;
}

void printTreeArray(struct treeArray *tree) {
    if (tree->index == 0) {
        printf("Heap is empty\n");
    }
    for (int i = 0; i < tree->index; i++) {
        printf("%d ", tree->array[i]);
        if (i == 0 || i == 2 || i == 6 || i == 14) {
            printf("\n");
        }

    }
    printf("\n");
}

int findAt(struct treeArray *tree, int target) {
    int* array =  tree->array;
    for (int i = 0; i < tree->index; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}
void printPath(int index) {
    if (index == 0) {
        printf("0->");
        return;
    }
    printPath((index - 1) / 2);
    printf("%d->", index);
}

void traversePath(struct treeArray *tree, int target) {
    int index = findAt(tree, target);
    if ((index != -1)) {
        printPath((index - 1) / 2);
        printf("%d\n", index);
    } else {
        printf("data not found\n");
    }
}

//int main() {
//    struct treeArray *tree = createTreeArray(7);
//
//    insertTree(tree, 1);
//    insertTree(tree, 2);
//    insertTree(tree, 3);
//    insertTree(tree, 4);
//    insertTree(tree, 5);
//    insertTree(tree, 6);
//    insertTree(tree, 7);
//
//    printTreeArray(tree);
//
//
//
//
//    return 0;
//}
