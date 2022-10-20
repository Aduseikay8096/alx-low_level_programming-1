#ifndef _LISTS_H_
#define _LISTS_H_

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 *
 * @str: malloced string
 * @len: length of string
 * @next: points to next node
 * Description: The singly linked node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t

size_t print_list(const list_t *h);

#endif /* _LISTS_H_ */
