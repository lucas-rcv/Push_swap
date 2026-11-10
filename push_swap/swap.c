#include "push_swap.h"

void    sa(t_list **stack_a)
{
    t_list *node1;
    t_list *node2;

    if (!*stack_a || !(*stack_a)->next)
        return ;
    node1 = *stack_a;
    node2 = node1->next;
    node1->next = node2->next;
    if (node2->next != NULL)
        node2->next->prev = node1;
    node2->next = node1;
    node2->prev = NULL;
    node1->prev = node2;
    *stack_a = node2;
}

void    sb(t_list **stack_b)
{
    t_list *node1;
    t_list *node2;

    if (!*stack_b || !(*stack_b)->next)
        return ;
    node1 = *stack_b;
    node2 = node1->next;
    node1->next = node2->next;
    if (node2->next != NULL)
        node2->next->prev = node1;
    node2->next = node1;
    node2->prev = NULL;
    node1->prev = node2;
    *stack_b = node2;
}

void    ss(t_list **stack_a, t_list**stack_b)
{
    sa(stack_a);
    sb(stack_b);
}