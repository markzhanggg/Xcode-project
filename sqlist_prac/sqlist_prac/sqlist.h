//
//  sqlist.h
//  sqlist_prac
//
//  Created by MarkZ on 9/8/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#ifndef sqlist_h
#define sqlist_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INITLEN 20
typedef struct{
    int *data;
    int len;
} sqlist;

void create_sqlist(sqlist *L);
int sqlist_insert(sqlist *L, int pos, int val);
int sqlist_delete(sqlist *L, int pos);
int Locate_elem(sqlist L, int val);
int get_elem(sqlist L, int pos);
void print_list(sqlist L);
void destroy(sqlist *L);
void del_s_t(sqlist *L, int s, int t);

#endif /* sqlist_h */
