#include <stdbool.h>

struct link {
	struct link* next;
	int data;
};

typedef struct link Link;

void append_data(Link* head, int new_data);
void append(Link* head, Link* new_item);
bool remove(Link* head, int data);
Link* create(int data);
