//
//  main.c
//  DS_practice
//
//  Created by MarkZ on 9/10/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*线性表-P19，13
  时间复杂度：O(n)
  空间复杂度：O(1)*/
int find_min(int a[], int n){
    int min = 1;                //初始化最小值为 1
    int i;
    for (i = 0; i < n; i++) {
        if(a[i] == min)         //如果出现了和当前最小值相同的正整数，最小值加一
            min++;
    }
    return min;
}


void cycle_move(int a[], int n, int p) {
    int i, j;
    int *b = (int *)malloc(sizeof(int) * p);    //用于存放数组a中前p个移出的

    if(p < 1 || p > n - 1)
        return;
    
    for(i = 0; i < p; i++)
        b[i] = a[i];                            //先把a[]中前p个挪出去
    
    for(int i = 0; i < n - p; i++)              //把n-p个后面的挪到前面
        a[i] = a[i + p];
    
    for(j = n - p, i = 0; j < n; j++, i++)      //把前面的p个挪到后面
        a[j] = b[i];
    
    
}

int main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3, 4, 5, 6};
//    int min;
    int len = 6;
    int p = 1;
//    min = find_min(arr, 6);
//    printf("min = %d\n", min);
    
    cycle_move(arr, len, p);
    printf("print result\n");
    for(int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
        
    return 0;
}
