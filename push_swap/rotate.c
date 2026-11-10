#include "push_swap.h"

void    ra(t_list **stack_a)
{
    t_list  *first_node;
    t_list  *last_node;

    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return ;
    first_node = *stack_a;
    last_node = first_node;
    while (last_node->next != NULL)
        last_node = last_node->next;
    *stack_a = first_node->next;
    (*stack_a)->prev = NULL;
    last_node->next = first_node;
    first_node->prev = last_node;
    first_node->next = NULL;
}

void    rb(t_list **stack_b)
{
    t_list  *first_node;
    t_list  *last_node;

    if (!stack_b || !*stack_b || !(*stack_b)->next)
        return ;
    first_node = *stack_b;
    last_node = first_node;
    while (last_node->next != NULL)
        last_node = last_node->next;
    *stack_b = first_node->next;
    (*stack_b)->prev = NULL;
    last_node->next = first_node;
    first_node->prev = last_node;
    first_node->next = NULL;
}

void    rr(t_list **stack_a, t_list **stack_b)
{
    ra(stack_a);
    rb(stack_b);
}