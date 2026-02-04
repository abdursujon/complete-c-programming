#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    int head;
    int tail;
    int size;
    int count;
} CircularBuffer;

// init = initialise
void init(CircularBuffer *cb, int size)
{
    cb->data = (int *)malloc(size * sizeof(int)); // cb -> data shorthand for (*cb).data
    cb->head = 0;
    cb->tail = 0;
    cb->size = size;
    cb->count = 0;
}

int is_full(CircularBuffer *cb)
{
    return cb->count == cb->size;
}

int is_empty(CircularBuffer *cb)
{
    return cb->count == 0;
}

void push(CircularBuffer *cb, int value)
{
    if (is_full(cb))
    {
        cb->head = (cb->head + 1) % cb->size;
        cb->count--;
    }
    cb->data[cb->tail] = value;
    cb->tail = (cb->tail + 1) % cb->size;
    cb->count++;
}

int pop(CircularBuffer *cb, int *value)
{
    if (is_empty(cb))
        return -1;

    *value = cb->data[cb->head];
    cb->head = (cb->head + 1) % cb->size;
    cb->count--;
    return 0;
}

void destroy(CircularBuffer *cb)
{
    free(cb->data);
}

int main()
{
    CircularBuffer cb;
    int val;

    init(&cb, 3);

    printf("push 1, 2, 3\n");
    push(&cb, 1);
    push(&cb, 2);
    push(&cb, 3);

    printf("push 4 (overwrites 1)\n");
    push(&cb, 4);

    printf("push 5 (overwrites 2)\n");
    push(&cb, 5);

    printf("\nDrain buffer:\n");
    while (pop(&cb, &val) == 0)
    {
        printf("popped: %d\n", val); // 3, 4, 5
    }

    destroy(&cb);
    return 0;
}
