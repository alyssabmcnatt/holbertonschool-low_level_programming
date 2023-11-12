singly linked lists

data structure:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

What's a node?
	It’s a structure with a pointer to the next node and value information
	It’s a space allocated in memory

What’s the “head” of a linked list?
	It’s the first node

What’s the “tail” of a linked list?
	It’s the node with the pointer to the next equals to NULL

In a singly linked list, what are possible directions to traverse it?
	Forward

Arrays Vs Linked Lists: select all true statements
	We can add elements indefinitely to a linked list
	Linked list can contain as value a structure
	Array can contain as value a structure
	We can easily remove an element from a Linked list
	Memory is aligned for an Array - each elements are back to back in the memory
