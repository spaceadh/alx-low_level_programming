#include "lists.h"

size_t list_len(const list_t *h)
{
    size_t count = 0;
    const list_t *ptr = h;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    return count;
}
