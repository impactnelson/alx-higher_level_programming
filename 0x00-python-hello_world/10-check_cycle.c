#include "lists.h"

/**
 * check_cycle - check for loop in L.List
 * @list: The head of l.list
 *
 * Description - To check for loops in L.List
 * Return: 1 if loop cycle, 0 if otherwise
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
