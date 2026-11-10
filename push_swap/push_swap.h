#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
    int num;
    struct s_list    *prev;
    struct s_list    *next;
}   t_list;

#endif