//
//  heap_sort.h
//  Heap_Sort
//
//  Created by MarkZ on 9/1/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#ifndef heap_sort_h
#define heap_sort_h

#include <stdio.h>
void swap(int array[], int i, int j);
extern void BuildHeap(int tree[], int len, int i);
extern void heapify(int tree[], int len, int i);
extern void build_heap(int tree[], int len);
extern void heap_sort(int tree[], int len);
#endif /* heap_sort_h */
