//
//  sqlist.c
//  sqlist_prac
//
//  Created by MarkZ on 9/8/20.
//  Copyright © 2020 MarkZ. All rights reserved.
//

#include "sqlist.h"

void create_sqlist(sqlist *L) {
    int len = 0, val = 0;
    
    printf("please enter the length of this sqlist\n");
    scanf("%d", &len);
    if(L->data == NULL) {
        L->data = (int *)malloc(sizeof(int) * INITLEN);
        memset(L->data, 0, INITLEN * sizeof(int));
        L->len = 0;
        printf("------Sqlist Initialized------\n");
    }
    for (int i = 0;i < len; i++) {
        printf("please enter the value of this elem:\n");
        scanf("%d", &val);
        L->data[i] = val;
        L->len++;
    }
}

int sqlist_insert(sqlist *L, int pos, int val) {
    int i = 0;
    
    if(pos < 1 || pos > L->len + 1) {
        printf("Wrong pos to insert!\n");
        return 0;
    }
    if (L->len == INITLEN){
        printf("No Space to Insert\n");
        return 0;
    }
    
    for(i = L->len - 1; i >= pos - 1; i--){
        L->data[i + 1] = L->data[i];
//        printf("L.data[%d] = %d\n", i, L->data[i]);
    }
    L->data[pos - 1] = val;
    L->len++;
    
    return 1;
}

int sqlist_delete(sqlist *L, int pos) {
    int i = 0;
    
    if (pos < 1 && pos > L->len) {
        printf("Wrong pos to delete!\n");
        return 0;
    }
    if (L->len == 0) {
        printf("Empty sqlist!\n");
        return 0;
    }
    
    for (i = pos; i < L->len; i++) {
        L->data[i - 1] = L->data[i];
    }
    
    L->len--;
    return 1;
}

int Locate_elem(sqlist L, int val) {
    int i = 0;
    
    for (i = 0; i < L.len; i++) {
        if (L.data[i] == val)
            return i + 1;
    }
    printf("No elem's val = %d\n", val);
    return 0;
}

int get_elem(sqlist L, int pos) {
    if (pos < 1 || pos > L.len) {
        printf("Wrong Pos!\n");
        return 9999;
    }
    return L.data[pos - 1];
}
void print_list(sqlist L) {
    int i = 0;
    printf("=======L.len = %d=====\n", L.len);
    if (L.len != 0) {
        for (i = 0; i < L.len - 1; i++)
            printf("%d--", L.data[i]);
        printf("%d\n", L.data[L.len - 1]);
    }
    else printf("Empty List!\n");
    
}

void destroy(sqlist *L) {
    if (L->data != NULL) {
        printf("Destroy the Sqlist!\n");
        free(L->data);
        L->len = 0;
    }
}

void del_s_t(sqlist *L, int s, int t) {
    int i,j;
    if (s >= t || L->len == 0) {
        printf("=====Cannot Delete s to t\n");
        return;
    }
    for (i = 0; i < L->len && L->data[i] < s; i++){}
        
    printf("pos of s:%d\n", i);
    if (i >= L->len) {
        printf("No need to delete\n");
        return;
    }
    for (j = i; j < L->len && L->data[j] <= t; j++){}
        
    printf("pos of t:%d\n", j);
    
    for (; j < L->len; i++, j++)
        L->data[i] = L->data[j];
    L->len = i;
    return;
}
