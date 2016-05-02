/**
 *
 */

void grdx_LinkedList_init(grdx_LinkedList_t * linkedList) {
    list->head = grdx_LinkedList_nil(list);
    list->tail = grdx_LinkedList_nil(list);
    list->size = 0;
}

grdx_LinkedListNode_t * grdx_LinkedList_find(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node, int (*compare)(grdx_LinkedListNode_t *, grdx_LinkedListNode_t *)) {
    return NULL;
}

void grdx_LinkedList_insert(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node) {
    ;
}

void grdx_LinkedList_remove(grdx_LinkedList_t * list, grdx_LinkedListNode_t * node) {
    ;
}

grdx_LinkedListNode_t * grdx_LinkedList_head(grdx_LinkedList_t * list) {
    return list->head;
}

grdx_LinkedListNode_t * grdx_LinkedList_tail(grdx_LinkedList_t * list) {
    return list->tail;
}

size_t grdx_LinkedList_size(grdx_LinkedList_t * list) {
    return list->size;
}

/* const */ grdx_LinkedListNode_t * grdx_LinkedList_nil(grdx_LinkedList_t * list) {
    /* ignored parameter */
    (void) list;

    return NULL;
}

void grdx_LinkedListNode_init(grdx_LinkedListNode_t * node);
grdx_LinkedListNode_t * grdx_LinkedListNode_next(grdx_LinkedListNode_t * node);
grdx_LinkedListNode_t * grdx_LinkedListNode_prev(grdx_LinkedListNode_t * node);
void * grdx_LinkedListNode_data(grdx_LinkedListNode_t * node);
