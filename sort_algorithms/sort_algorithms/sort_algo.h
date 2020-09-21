//
//  sort_algo.h
//  sort_algorithms
//
//  Created by MarkZ on 9/2/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#ifndef sort_algo_h
#define sort_algo_h

#include <stdio.h>

extern void swap(int array[], int i, int j);
extern void insert_sort(int array[], int len);
extern void Binsert_sort(int array[], int len);
extern void bubble_sort(int array[], int len);
extern int partition(int array[], int low, int high);
extern void quick_sort(int array[], int low, int high);
#endif /* sort_algo_h */
