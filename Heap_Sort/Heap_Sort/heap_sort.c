//
//  heap_sort.c
//  Heap_Sort
//
//  Created by MarkZ on 9/1/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include "heap_sort.h"

void swap(int array[], int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void heapify(int tree[], int len, int i) {
    if (i > len)
        return;
    int lchild = i * 2 + 1;
    int rchild = i * 2 + 2;
    int max = i;
    
    if (lchild < len && tree[lchild] > tree[max])
        max = lchild;
    if (rchild < len  && tree[rchild] > tree[max])
        max = rchild;
    if (max != i){
        swap(tree, max, i);
        heapify(tree, len, max);
    }
}

void build_heap(int tree[], int len){
    int last_node = len - 1;
    int parent = (last_node - 1) / 2;
    int i;
    for(i = parent; i >=0; i--)
        heapify(tree, len, i);
}

void heap_sort(int tree[], int len){
    build_heap(tree, len);
    int i;
    for(i = len - 1;i >= 0; i--) {
        swap(tree, i, 0);
        heapify(tree, i, 0);
    }
}

