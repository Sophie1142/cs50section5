// Write a program that prompts the user to type in integers,
// adds each integer one at a time to the head of a linked list,
// and then prints out the integers in the linked list
// (they'll be in reverse order from the input).

// Note: When running the program, press Ctrl-D to stop entering numbers.

// Extension 2: Modify the example above to
// add new nodes to the linked list such that
// the linked list is always kept in ascending order.

#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

          // Allocate new node
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;

        // Add new node in sorted order
	    if (list == NULL || x < list->number)
        {
            n->next = list;
            list = n;
        }
        else
        {
            node *ptr = list;
            while (ptr->next != NULL && x > ptr->next->number)
            {
                ptr = ptr->next;
            }
            n->next = ptr->next;
            ptr->next = n;
        }
    }

	// Print all nodes.
	for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
	// TODO: Free all nodes.
	node *ptr = list;
    while (ptr != NULL)
    {
        node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }

}