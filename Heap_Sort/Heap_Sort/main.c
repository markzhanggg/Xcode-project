//
//  main.c
//  Sort_Algorithms
//
//  Created by MarkZ on 9/1/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include <stdio.h>
#include "heap_sort.h"
int main(int argc, const char * argv[]) {
    int tree[] = {87, 45, 78, 32, 17, 65, 53, 9};
    int len = 8;
    int i;
    
    heap_sort(tree, len);
    
    for(i = 0; i < len; i++)
        printf("%d\n", tree[i]);
    
    return 0;
}
