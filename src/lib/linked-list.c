void append(link* head, int new_data) {
	append(head, create(new_data));
}

void append(link* head, link* new_item) {
	new_item->next = head->next;
	head->next = new_item;
}

void remove(link* head, int data) {
	struct link* iter = head;

	for (iter = head; iter != NULL; iter = iter->next) {
	
	}
}

link* create(int data) {

}
