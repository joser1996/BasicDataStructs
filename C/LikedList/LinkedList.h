#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/* list_t - Linked List type
 * Single Linked list data structure
 */
typedef struct list* list_t;


/*
 * Allocat an empty linked list
 * 
 * Return: Pointer to a new linked list (head)
 */
list_t listCreate(void);

/*
 * Free's memory taken up by linked list
 * @list: list to deallocate
 *
 * Return: 0 on success otherwise returns -1
 */
int listDestroy(list_t list);

/*
 * Append the address found in data to linked list
 *
 * Return: 0 on success; else returns -1
 */
int listAppend(list_t list, void* data);

/*
 * Finds the current length of the list.
 * Return -1 if list is NULL otherwise returns
 * the size of the list
 */
int listLength(list_t list);

/*
 * Print linked list starting from the head
 */
void printList(list_t list);
/*
 * Reverse a linked list.
 *
 * Returns 0 on success otherwise returns -1
 */
int reverseList(list_t list);
#endif