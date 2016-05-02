/**
 *
 */

#ifndef GRDX_LINKEDLIST_H
#define GRDX_LINKEDLIST_H

#include <stddef.h> /* NULL, size_t */

struct grdx_LinkedListNode_s;
struct grdx_LinkedList_s;
struct grdx_LinkedListSentinel_s;

typedef grdx_LinkedListNode_s grdx_LinkedListNode_t;
typedef grdx_LinkedList_s grdx_LinkedList_t;
typedef grdx_LinkedListSentinel_s grdx_LinkedListSentinel_t;

struct grdx_LinkedListNode_s {
    void * data;
    grdx_LinkedListNode_t * prev;
    grdx_LinkedListNode_t * next;
};

struct grdx_LinkedList_s {
    size_t size;
    grdx_LinkedListNode_t * head;
    grdx_LinkedListNode_t * tail;
};

struct grdx_LinkedListSentinel_s {
    size_t size;
    grdx_LinkedListNode_t nil;
};

/* inline */

void grdx_LinkedList_init(grdx_LinkedList_t * list);
grdx_LinkedListNode_t * grdx_LinkedList_find(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node, int (*compare)(grdx_LinkedListNode_t *, grdx_LinkedListNode_t *));
void grdx_LinkedList_insert(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node, int (*compare)(grdx_LinkedListNode_t *, grdx_LinkedListNode_t *));
void grdx_LinkedList_insertHead(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node);
void grdx_LinkedList_insertTail(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node);
void grdx_LinkedList_remove(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node);
grdx_LinkedListNode_t * grdx_LinkedList_head(grdx_LinkedList_t * list);
grdx_LinkedListNode_t * grdx_LinkedList_tail(grdx_LinkedList_t * list);
size_t grdx_LinkedList_size(grdx_LinkedList_t * list);
const  grdx_LinkedListNode_t * grdx_LinkedList_nil(grdx_LinkedList_t * list);

void grdx_LinkedListNode_init(grdx_LinkedListNode_t * node);
grdx_LinkedListNode_t * grdx_LinkedListNode_next(grdx_LinkedListNode_t * node);
grdx_LinkedListNode_t * grdx_LinkedListNode_prev(grdx_LinkedListNode_t * node);
void * grdx_LinkedListNode_getData(grdx_LinkedListNode_t * node);
void grdx_LinkedListNode_setData(grdx_LinkedListNode_t * node);

#endif /* GRDX_LINKEDLIST_H */
