#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char* argv[])
{
    queue_t *q = (queue_t *)malloc(sizeof(queue_t));

    queue_init(q);
    queue_add(q, 1, 5);
    queue_add(q, 2, 2);
    queue_add(q, 3, 3);
    queue_add(q, 5, 1);
    
    int size = queue_size(q);
    while(size > 0)
    {
        int value;
        queue_remove(q, &value);
        printf("removed %d from the queue\n", value);
        size = queue_size(q);
    }

    queue_delete(q);
    free(q);
    
    return 0;
}