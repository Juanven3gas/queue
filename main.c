#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char* argv[])
{
    queue_t *q = (queue_t *)malloc(sizeof(queue_t));

    queue_init(q);
    queue_delete(q);
    free(q);
    
    return 0;
}