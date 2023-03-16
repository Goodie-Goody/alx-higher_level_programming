#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to the head of the linked list
 * @number: the number to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *current;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = number;
    new_node->next = NULL;

    if (*head == NULL || (*head)->n >= new_node->n) {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    current = *head;
    while (current->next != NULL && current->next->n < new_node->n) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
