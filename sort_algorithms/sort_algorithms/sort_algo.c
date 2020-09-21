//
//  sort_algo.c
//  sort_algorithms
//
//  Created by MarkZ on 9/2/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include "sort_algo.h"

void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void insert_sort(int array[], int len) {
    int i, j, key;
    
    printf("=====Enter insert sort!=====\n");
    for (i = 1; i <= len - 1; i++) {
        if (array[i] < array[i - 1]) {
            key = array[i];
            for  (j = i - 1; array[j] > key; j--)
                array[j + 1] = array[j];
            array[j + 1] = key;             //I fucking forgot this line..
        }
    }
}

void Binsert_sort(int array[], int len) {
    int i, j, low, high, mid, key;
    
    printf("=====Enter binary insert sort!=====\n");
    for (i = 1; i <= len - 1; i++) {
        key = array[i];
        low = 0;
        high = i - 1;               //got nothing to say.....
    
        /*binary search the array to find the position to be insert*/
        while (low <= high) {
            mid = (low + high) / 2;
            if (array[mid] > key)
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        /*move all elements after array[high]*/
        for (j = i - 1; j >= high + 1; j--)
            array[j + 1] = array[j];
        /*insert*/
        array[high + 1] = key;
    }
}

void bubble_sort(int array[], int len) {
    int i, j, flag;
    
    printf("=====Enter bubble sort!=====\n");
    for (i = 0; i < len - 1; i++) {
        printf("#%d round begin!\n", i + 1);
        flag = 0;
        for(j = len - 1; j > i; j--) {
            if(array[j] < array[j - 1]){
                swap(array, j, j - 1);
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("#%d round no swap happens.\n", i+1);
            return;
        }
        
    }
}

int partition(int array[], int low, int high) {
    int pivot = array[low];
    
    printf("-----enter partition algo-----\n");
    printf("pivot = %d\n", pivot);
    while (low < high) {
        while(low < high && array[high] >= pivot)
            --high;
        array[low] = array[high];
        while (low < high && array[low] <= pivot)
            ++low;
        array[high] = array[low];
    }
    array[low] = pivot;
    
    return low;
}

void quick_sort(int array[], int low, int high) {
    int pivot_pos;
    
    printf("=====Enter quick sort!\n");
    while (low < high) {
        pivot_pos = partition(array, low, high);
        printf("pivotpos = %d\n", pivot_pos);
        quick_sort(array, low, pivot_pos - 1);
        quick_sort(array, pivot_pos + 1, high);
    }
}
