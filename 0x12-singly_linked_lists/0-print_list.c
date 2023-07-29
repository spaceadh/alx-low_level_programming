#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *ptr = h;

    while (ptr != NULL)
    {
        if (ptr->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", ptr->len, ptr->str);
        }
        ptr = ptr->next;
        count++;
    }

    return count;
}
