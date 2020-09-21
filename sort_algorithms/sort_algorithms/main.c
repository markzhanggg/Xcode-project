//
//  main.c
//  sort_algorithms
//
//  Created by MarkZ on 9/2/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include <stdio.h>
#include "sort_algo.h"

int main() {
//    int arr[] = {6, 5, 3, 7, 1, 2, 4};
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
//    int arr[] = {6, 5, 3};
    int len = 7;
    int loop;
    
//    printf("before....\n");
//    for (loop = 0; loop < len; loop++) {
//        printf("%d\n", arr[loop]);
//    }
    
//    insert_sort(arr, len);
//    Binsert_sort(arr, len);
    bubble_sort(arr, len);
//    quick_sort(arr, 0, len - 1);
    
    for (loop = 0; loop < len; loop++) {
        printf("%d\n", arr[loop]);
    }
    
    return 0;
}
