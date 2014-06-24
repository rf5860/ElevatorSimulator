#include	<stdlib.h>
#include	<stdio.h>

#define ELEVATORS 10
#define MAX_CAPACITY 9
#define FRAMES 60

typedef struct {
  int x;
  struct node *next; 
} node;

typedef struct {
   int id;
   double waitingTime;
} passenger;

typedef struct {
   int capacity;
   int floor;
} elevator;

typedef struct passenger Passenger;

typedef struct elevator Elevator;

void initialise_passenger(passenger p, int id)
{
   p.id = id;
   p.waitingTime = 0.0;
}

void initialise_elevator(elevator e, int id)
{
   e.capacity = MAX_CAPACITY;
   // initialise_passenger(e, id);
   e.floor = 0;
}

static void execute_step(elevator es[], int size)
{
}

void initialise_elevators(elevator es[], int size)
{
   int i;
   for (i = 0; i < size; i++) {
      initialise_elevator(es[i], i);
   }

   printf("Elevators initialised.\n");
}


int main(int argc, char *argv[])
{
   elevator elevators[ELEVATORS];
   initialise_elevators(elevators, ELEVATORS);

   
   while (1) {
      execute_step(elevators, ELEVATORS);
   }

   return 0;
}
