#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
struct ListNode;
typedef struct ListNode* list_node_t;

struct ListNode { 
	void* data;
	list_node_t next;
};

struct list {
	list_node_t head;
	list_node_t tail;
	int count;
};

list_node_t listNodeCreate(void* data) {
	list_node_t node = malloc(sizeof(struct ListNode));
	node->data = data;
	node->next = NULL;
	return node;
}

list_t listCreate(void) {
	list_t list = malloc(sizeof(struct list));
	if(list == NULL)
		return NULL;
	list->head = NULL;
	list->tail = NULL;
	list->count = 0;
	return list;
}

int listDestroy(list_t list) {
	if(list == NULL || list->count != 0) {
		return -1;
	}
	free(list);
	return 0;
}

int listAppend(list_t list, void* data) {
	if(list == NULL || data == NULL) {
		return -1;
	}
	if(list->head == NULL) {
		list->head = listNodeCreate(data);
		list->tail = list->head;
	} else {
		list_node_t newNode = listNodeCreate(data);
		list->tail->next = newNode;
		list->tail = newNode;
	}
	list->count++;
	return 0;
}

int listLength(list_t list) {
	if(list == NULL)
		return -1;
	return list->count;
}

void printList(list_t list) {
	list_node_t start = list->head;
	while(start != NULL) {
		int* d = (int*)start->data;
		printf("%d ", *d);
		start = start->next;
	}
	printf("\n");
}

int reverseList(list_t list) {
	if(list == NULL || list->count == 0){
		return -1;
	}
	list_node_t H = list->head;
	list_node_t T = list->tail;
	list_node_t prev = NULL;
	list_node_t currentNode = list->head;
	list_node_t next = NULL;
	while(currentNode != NULL) {
		next = currentNode->next;
		currentNode->next = prev;

		prev = currentNode;
		currentNode = next;
	}
	list_node_t temp = H;
	H = T;
	T = temp;
	return 0;
}
