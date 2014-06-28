#include "linked-list.h"
#include <stddef.h>

void append_data(Link* head, int new_data) {
	append(head, create(new_data));
}

void append(Link* head, Link* new_item) {
	new_item->next = head->next;
	head->next = new_item;
}

bool remove(Link* head, int data) {
	Link* iter = head;

	for (iter = head; iter != NULL; iter = iter->next) {
		
	}

	return false;
}

Link* create(int data) {

}
