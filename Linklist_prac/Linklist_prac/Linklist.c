//
//  Linklist.c
//  Linklist_prac
//
//  Created by MarkZ on 9/11/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include "Linklist.h"


Linklist create_list(Linklist L) {
    LNode *s = NULL;
    int val = 0;
    L = (LNode*)malloc(sizeof(LNode));
    L->data = 0;
    L->link = NULL;
    
    printf("please enter value of the node:\n");
    scanf("%d", &val);
    while (val != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = val;
        s->link = L->link;
        L->link = s;
        L->data++;
        printf("please enter value of the node:\n");
        scanf("%d", &val);
    }
    
    return L;
}

int find_k(Linklist L, int k, int len) {
    LNode *p = L;
     if (k < 1 || k > len)
         return 0;
    
    printf("debug=====%d=====\n", len - k + 1);
    for (int i = 0; i < len - k + 1; i++)   //遍历到倒数第k个需要头指针往后移动len-k+1次
        p = p->link;
    
    printf("倒数第%d个为[%d]\n", k, p->data);
    return 1;
    
}

void printList(Linklist L) {
    LNode *p = L->link;
    if(L->data == 0)
        return ;
    for (int i = 0; i < L->data - 1; i++) {
        printf("[%d]->", p->data);
        p = p->link;
    }
    printf("[%d]\n", p->data);
}
