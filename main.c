// list/main.c
// 
// Tests for linked list implementation.
//
// <Tanjin Prity>

#include <stdio.h>
#include "list.h"

int main() {
	printf("Tests for linked list implementation\n");
	list_t *list1 = list_alloc();
	list_add_to_front(list1,2);
	list_add_to_front(list1,1);
	list_add_to_back(list1,3);
	list_add_to_back(list1,4);
	list_add_at_index(list1,7,3);
	list_add_to_back(list1,5);
	list_add_to_front(list1,6);
	list_add_at_index(list1,9,5);
	list_print(list1);
	
	elem e1 = list_remove_from_front(list1);
	elem e2 = list_remove_at_index(list1, 3);
	elem e3 = list_remove_from_back(list1);
	list_print(list1);
	
	int length = list_length(list1);
	printf("Length of the list is: %d.\n", length);
	
	elem item = 10;
	bool exist = list_is_in(list1, item);
	if (exist){
		printf("%d is in the list.\n", item);
	} else {
		printf("%d is not in the list.\n", item);
	}
	
	int index1 = 2;
	elem e4 = list_get_elem_at(list1, index1);
	printf("Element at index %d is: %d. \n", index1, e4);
	
	elem e5 = 2;
	int index2 = list_get_index_of(list1,e5);
	printf("Element %d is at index: %d. \n", e5, index2);
	
	list_free(list1);
	return 0;
}