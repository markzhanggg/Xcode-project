//
//  Linklist.h
//  Linklist_prac
//
//  Created by MarkZ on 9/11/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#ifndef Linklist_h
#define Linklist_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int data;
    struct node *link;
}LNode, *Linklist;

extern void printList(Linklist L);
extern Linklist create_list(Linklist L);
extern int find_k(Linklist L, int k, int len);

#endif /* Linklist_h */
