#include "push_swap.h"

double  compute_disorder(t_list *stack_a)
{
    double  mistakes;
    double  total_pairs;
    t_list    *i;
    t_list    *j;

    mistakes = 0;
    total_pairs = 0;
    if (!stack_a || !stack_a->next)
        return (0.0);
    i = stack_a;
    while (i != NULL)
    {
        j = i->next;
        while (j != NULL)
        {
            total_pairs++;
            if (i->num > j->num)
                mistakes++;
            j = j->next;
        }
    i = i->next;
    }
    return (total_pairs / mistakes);
}
