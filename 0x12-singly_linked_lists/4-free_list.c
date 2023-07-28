#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
    list_t *current = head;
    while (current != NULL)
    {
        list_t *temp = current;
        current = current->next;
        free(temp->str);
        free(temp);
    }
}
