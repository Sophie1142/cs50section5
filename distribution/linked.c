// Write a program that prompts the user to type in integers,
// adds each integer one at a time to the head of a linked list,
// and then prints out the integers in the linked list
// (they'll be in reverse order from the input).

// Note: When running the program, press Ctrl-D to stop entering numbers.

// Extension 1: Modify the example above to add new nodes to the end
// of a linked list, rather than the beginning.
// As a result, the list of numbers should now print out in order,
// instead of reverse order.

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

        // TODO: Allocate a new node.
				// TODO: Add new node to head of linked list.

    }

	// TODO: Print all nodes.
	// TODO: Free all nodes.

}