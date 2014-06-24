struct link {
	struct link* next;
	int data;
};

typedef struct link Link;

void append(link* head, int new_data);
void append(link* head, link* new_item);
bool remove(link* head, int data);
link* create(int data);
