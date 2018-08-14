#include <stdio.h>
#include <stdlib.h>

// make a Queue struct
typedef struct queue
{
  int *storage;
  unsigned int length;  // length is is the same as the top index plus one or next top index
  unsigned int maxSize; // total number of items in the queue
} Queue;

Queue *make_a_queue(unsigned int maxSize)
{
  // instantiate a queue variable and allocate some memory
  Queue *a_new_queue = malloc(sizeof(Queue));

  // instantiate the length, which also works as the starting index
  a_new_queue->length = 0;

  // this will be the maximum number of items in the Queue
  a_new_queue->maxSize = maxSize;

  // Allocate some memory for the collection of items in the Queue
  a_new_queue->storage = malloc(maxSize * sizeof(int));

  return a_new_queue;
}

// function that checks if the Queue is full
int is_full(Queue *queue)
{
  // we check if the length has reached the capacity
  return queue->length == queue->maxSize;
}

void enqueue(Queue *queue, int item)
{
  // before appending or pushing or adding, we will check if its full
  if (is_full(queue))
  {
    printf("You can not add %d to the Queue, because it is full\n", item);
    return; // we full so stop
  }

  // Queue is not full, so add item
  queue->storage[queue->length] = item;

  // increase the length
  // queue->length++;
  queue->length += 1;
}

// Take a look at what is the last item in the queue
int peek(Queue *queue)
{
  // Look at the last item in the queue
  return queue->storage[queue->length - 1];
}

// Take a look at what is the first item in the queue
int peek_first(Queue *queue)
{
  // Look at the first item in the queue
  return queue->storage[0];
}

// check if the queue is empty
int is_empty(Queue *queue)
{
  return queue->length == 0;
}

int dequeue(Queue *queue)
{
  // check if the Queue is empty
  if (is_empty(queue))
  {
    printf("We can not return anything because the queue is empty\n");
    return -1;
  }

  // return an item
  int rv = peek_first(queue);

  // remake the storage collection
  for (unsigned int i = 0; i < queue->length - 1; i++)
  {
    queue->storage[i] = queue->storage[i + 1];
  }

  // reduce the length
  queue->length--;
  return rv;
}

// Take a look at what is the given index item in the queue
int check_index(Queue *queue, unsigned int index)
{
  // check if the index is valid
  if (queue->length < index)
  {
    printf("Out of range index\n");
    return -1;
  }
  // Look at the item in the queue at given index
  return queue->storage[index];
}

void destroy(Queue *queue)
{
  free(queue->storage);
  free(queue);
}

int main(void)
{

  Queue *queue = make_a_queue(5);
  // pop item from the queue
  int item1 = dequeue(queue);

  // add items to the queue
  enqueue(queue, 3);
  enqueue(queue, 4);
  enqueue(queue, 7);
  // pop item from the queue
  int item2 = dequeue(queue);
  enqueue(queue, 9);
  enqueue(queue, 31);

  enqueue(queue, 19);

  printf("The last item in the queue is %d\n", peek(queue));
  printf("The first item in the queue is %d\n", peek_first(queue));
  printf("The item in the queue at index seven %d\n", check_index(queue, 7));
  printf("The item in the queue at index two %d\n", check_index(queue, 2));
  printf("The item from the dequeue item1 %d\n", item1);
  printf("The item from the dequeue item2 %d\n", item2);

  // free the space
  destroy(queue);

  return 0;
}
