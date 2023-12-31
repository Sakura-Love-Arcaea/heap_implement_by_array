//
// Created by ToBy_RedStones on 7/12/2023.
//

#ifndef DATA_STRUCTURE_BALANCETREE_IMPLEMENT_BY_ARRAY_H
#define DATA_STRUCTURE_BALANCETREE_IMPLEMENT_BY_ARRAY_H
struct treeArray {
    int *array;
    int index;
    int size;
};

struct treeArray* createTreeArray(int size);
void insertTree(struct treeArray *tree, int data);
int popTree(struct treeArray *tree);
void printTreeArray(struct treeArray *tree);
int findAt(struct treeArray *tree, int data);
void printPath(int index);
void traversePath(struct treeArray *tree, int target);
#endif //DATA_STRUCTURE_BALANCETREE_IMPLEMENT_BY_ARRAY_H
