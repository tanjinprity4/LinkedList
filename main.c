// list/main.c
// 
// Tests for linked list implementation.
//
// <Tanjin Prity>

#include <stdio.h>
#include "list.h"

int main() {
	printf("Tests for linked list implementation.\n");
    printf("We assume index starts from 0.\n\n");
	list_t *list1 = list_alloc();
	list_add_to_front(list1,2);
    printf("Add %d to the front: ", 2);
    list_print(list1);
    
	list_add_to_front(list1,1);
    printf("Add %d to the front: ", 1);
    list_print(list1);
    
	list_add_to_back(list1,3);
    printf("Add %d to the back: ", 3);
    list_print(list1);
    
	list_add_to_back(list1,4);
    printf("Add %d to the back: ", 4);
    list_print(list1);
    
	list_add_at_index(list1,7,3);
    printf("Add %d at index %d: ", 7,3);
    list_print(list1);
    
	list_add_to_back(list1,5);
    printf("Add %d to the back: ", 5);
    list_print(list1);
    
	list_add_to_front(list1,6);
    printf("Add %d to the front: ", 6);
    list_print(list1);
    
	list_add_at_index(list1,9,5);
    printf("Add %d at index %d: ", 9,5);
    list_print(list1);
    
	
	elem e1 = list_remove_from_front(list1);
    printf("\nRemoved %d from the front: ", e1);
    list_print(list1);
    
	elem e2 = list_remove_at_index(list1, 3);
    printf("Removed %d from the index, %d: ", e2, 3);
    list_print(list1);
    
	elem e3 = list_remove_from_back(list1);
    printf("Removed %d from the back: ", e3);
	list_print(list1);
	
	int length = list_length(list1);
	printf("\nLength of the list is: %d.\n", length);
	
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


/***
 * Tests for linked list implementation.
 * We assume index starts from 0.
 * 
 * Add 2 to the front: 2
 * Add 1 to the front: 1 -> 2
 * Add 3 to the back: 1 -> 2 -> 3
 * Add 4 to the back: 1 -> 2 -> 3 -> 4
 * Add 7 at index 3: 1 -> 2 -> 3 -> 7 -> 4
 * Add 5 to the back: 1 -> 2 -> 3 -> 7 -> 4 -> 5
 * Add 6 to the front: 6 -> 1 -> 2 -> 3 -> 7 -> 4 -> 5
 * Add 9 at index 5: 6 -> 1 -> 2 -> 3 -> 7 -> 9 -> 4 -> 5
 * 
 * Removed 6 from the front: 1 -> 2 -> 3 -> 7 -> 9 -> 4 -> 5
 * Removed 7 from the index, 3: 1 -> 2 -> 3 -> 9 -> 4 -> 5
 * Removed 5 from the back: 1 -> 2 -> 3 -> 9 -> 4
 * 
 * Length of the list is: 5.
 * 10 is not in the list.
 * Element at index 2 is: 3.
 * Element 2 is at index: 1.
 * 
*/