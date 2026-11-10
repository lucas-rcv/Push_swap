#include "push_swap.h"

void    rra(t_list **stack_a)
{
    t_list *last_node;
    t_list *first_node;

    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return ;
    first_node = *stack_a;
    last_node = first_node;
    while (last_node->next != NULL)
        last_node = last_node->next;
    last_node->prev->next = NULL;
    last_node->prev = NULL;
    last_node->next = first_node;
    first_node->prev = last_node;
    *stack_a = last_node;
}

void    rrb(t_list **stack_b)
{
    t_list  *first_node;
    t_list  *last_node;

    if (!stack_b || !*stack_b || !(*stack_b)->next)
        return ;
    first_node = *stack_b;
    last_node = first_node;
    while (last_node->next != NULL)
        last_node = last_node->next;
    last_node->prev->next = NULL;
    first_node->prev = last_node;
    last_node->prev = NULL;
    last_node->next = first_node;
    *stack_b = last_node;
}

void    rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}