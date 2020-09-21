//
//  main.c
//  Linklist_prac
//
//  Created by MarkZ on 9/11/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include <stdio.h>
#include "Linklist.h"

int main(int argc, const char * argv[]) {
    Linklist head = NULL;
    int k = 0;
    int result = 0;
    
    printf("=====Create LinkList=====\n");
    head = create_list(head);
    printList(head);
    printf("请输入查找倒数第k个：\n");
    scanf("%d", &k);
    result = find_k(head, k, head->data);
    return 0;
}
