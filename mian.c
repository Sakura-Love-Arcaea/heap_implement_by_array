#include <stdio.h>
#include <stdlib.h>
#include "headers/balanceTree_implement_by_array.h"
#include "headers/heap_implement_by_array.h"
void printSpaces(int n) {
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}

void print_Tree(int arr[], int index, int space, int size) {
    // Base case
    if (index >= size) {
        return;
    }

    // Increase distance between levels
    space += 20;

    // Process right child first
    print_Tree(arr, 2 * index + 2, space, size);

    // Print current node after space
    printf("\n");
    printSpaces(space - 5);  // Adjust space to match the structure
    printf("%d\n", arr[index]);

    // Process left child
    print_Tree(arr, 2 * index + 1, space, size);
}

int main() {
    struct treeArray *tree = createTreeArray(32);

    heapInsert(tree, 23);
    heapInsert(tree, 63);
    heapInsert(tree, 12);
    heapInsert(tree, 42);
    heapInsert(tree, 26);
    heapInsert(tree, 7);
    heapInsert(tree, 19);
    heapInsert(tree, 29);
    heapInsert(tree, 64);
    heapInsert(tree, 78);
    heapInsert(tree, 2);
    heapInsert(tree, 3);
    heapInsert(tree, 5);
    heapInsert(tree, 9);
    heapInsert(tree, 4);
    heapInsert(tree, 23);
    heapInsert(tree, 63);
    heapInsert(tree, 12);
    heapInsert(tree, 42);
    heapInsert(tree, 26);
    heapInsert(tree, 7);
    heapInsert(tree, 19);
    heapInsert(tree, 29);
    heapInsert(tree, 64);
    heapInsert(tree, 78);
    heapInsert(tree, 2);
    heapInsert(tree, 3);
    heapInsert(tree, 5);
    heapInsert(tree, 9);
    heapInsert(tree, 4);
    printTreeArray(tree);
    print_Tree(tree->array, 0, 0, tree->index);

    return 0;
}