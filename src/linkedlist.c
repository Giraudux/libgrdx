/**
 *
 */

#include "linkedlist.h"

void grdx_LinkedList_init(grdx_LinkedList_t * list) {
    list->size = 0;
    list->nil.data = NULL;
    list->nil.prev = &(list->nil);
    list->nil.next = &(list->nil);
}

grdx_LinkedListNode_t * grdx_LinkedList_findFromHead(grdx_LinkedList_t * list, void * data, int (*compare)(const void *, const void *)) {
    grdx_LinkedListNode_t * node;

    node = list->nil.next;
    while(node != &(list->nil) && !compare(data, node->data)) {
        node = node->next;
    }

    return node;
}

grdx_LinkedListNode_t * grdx_LinkedList_findFromTail(grdx_LinkedList_t * list, void * data, int (*compare)(const void *, const void *)) {
    grdx_LinkedListNode_t * node;

    node = list->nil.prev;
    while(node != &(list->nil) && !compare(data, node->data)) {
        node = node->prev;
    }

    return node;
}

void grdx_LinkedList_insertFromHead(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node, int (*compare)(const void *, const void *)) {
    (void) list;
    (void) node;
    (void) compare;
}

void grdx_LinkedList_insertFromTail(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node, int (*compare)(const void *, const void *)) {
    (void) list;
    (void) node;
    (void) compare;
}

void grdx_LinkedList_insertHead(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node) {
    node->next = list->nil.next;
    list->nil.next->prev = node;
    list->nil.next = node;
    node->prev = &(list->nil);
    list->size++;
}

void grdx_LinkedList_insertTail(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node) {
    node->prev = list->nil.prev;
    list->nil.prev->next = node;
    list->nil.prev = node;
    node->next = &(list->nil);
    list->size++;
}

void grdx_LinkedList_remove(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
    list->size--;
}

grdx_LinkedListNode_t * grdx_LinkedList_head(grdx_LinkedList_t * list) {
    return list->nil.next;
}

grdx_LinkedListNode_t * grdx_LinkedList_tail(grdx_LinkedList_t * list) {
    return list->nil.prev;
}

size_t grdx_LinkedList_size(grdx_LinkedList_t * list) {
    return list->size;
}

const  grdx_LinkedListNode_t * grdx_LinkedList_nil(grdx_LinkedList_t * list) {
    return &(list->nil);
}

void grdx_LinkedListNode_init(grdx_LinkedListNode_t * node) {
    node->data = NULL;
    node->prev = NULL;
    node->next = NULL;
}

grdx_LinkedListNode_t * grdx_LinkedListNode_next(grdx_LinkedListNode_t * node) {
    return node->next;
}

grdx_LinkedListNode_t * grdx_LinkedListNode_prev(grdx_LinkedListNode_t * node) {
    return node->prev;
}

void * grdx_LinkedListNode_getData(grdx_LinkedListNode_t * node) {
    return node->data;
}

void grdx_LinkedListNode_setData(grdx_LinkedListNode_t * node, void * data) {
    node->data = data;
}
