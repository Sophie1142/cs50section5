// Write a program that prompts the user to type in integers,
// adds each integer one at a time to the head of a linked list,
// and then prints out the integers in the linked list
// (they'll be in reverse order from the input).

// Note: When running the program, press Ctrl-D to stop entering numbers.

// Extension 1: Modify the example above to add new nodes to the end
// of a linked list, rather than the beginning.
// As a result, the list of numbers should now print out in order,
// instead of reverse order.

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

        // Add new node to end of list
	    if (list == NULL)
        {
            list = n;
        }
        else
        {
            node *ptr = list;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
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