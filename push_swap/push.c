#include "push_swap.h"

void    pa(t_list **stack_a, t_list **stack_b)
{
    t_list  *node1;

    if ((!stack_b || !*stack_b))
        return ;
    node1 = *stack_b;
    *stack_b = node1->next;
    if (*stack_b != NULL)
        (*stack_b)->prev = NULL;
    node1->next = *stack_a;
    node1->prev = NULL;
    if (*stack_a != NULL)
        (*stack_a)->prev = node1;
    *stack_a = node1;
}

void    pb(t_list **stack_a, t_list **stack_b)
{
    t_list  *node1;

    if (!stack_b || !*stack_b)
        return ;
    node1 = *stack_a;
    *stack_a = node1->next;
    if (*stack_a != NULL)
        (*stack_a)->prev = NULL;
    node1->next = (*stack_b);
    node1->prev = NULL;
    if (*stack_b != NULL)
        (*stack_b)->prev = node1;
    *stack_b = node1;
}
