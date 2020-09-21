//
//  main.c
//  sqlist_prac
//
//  Created by MarkZ on 9/8/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include <stdio.h>
#include "sqlist.h"
int main(int argc, const char * argv[]) {
    sqlist L = {0};
    int pos = 0, val = 0;
    int s, t;
    create_sqlist(&L);
    print_list(L);
    printf("please enter the pos and value for the insert operation\n");
    scanf("%d %d", &pos, &val);
    sqlist_insert(&L, pos, val);
    print_list(L);
    
    printf("please enter the pos for the delete operation\n");
    scanf("%d", &pos);
    sqlist_delete(&L, pos);
    print_list(L);
    
    printf("Enter the val of s & t (s < t)\n");
    scanf("%d %d", &s, &t);
    del_s_t(&L, s, t);
    print_list(L);
    return 0;
}
