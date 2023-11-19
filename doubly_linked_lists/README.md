In a doubly linked list, what are possible directions to traverse it? (select all possible answers)
	forward
	backward

In a doubly linked list, what’s the “head” of a linked list?
	It’s the node with the pointer to the previous equals to NULL

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
