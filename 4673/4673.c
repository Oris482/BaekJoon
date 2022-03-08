#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int value;
    struct s_list *next;
}   t_list;

int func_d(int a)
{
    int result = a;

    while (a != 0)
    {
        result += (a % 10);
        a /= 10;
    }
    return (result);
}

t_list  *ft_lstnew(int value)
{
    t_list  *node;

    node = (t_list *)calloc(1, sizeof(t_list));
    if (node == NULL)
        return (NULL);
    node->value = value;
    return (node);
}

void    put_lst_to_next(t_list *cur, t_list *target)
{
    target->next = cur->next;
    cur->next = target;
}

int main(void)
{
    t_list *head;
    t_list *cur;
    t_list *prev;
    int     base_num = 1;
    int     cur_value;
    int     start;
    int     end;

    head = (t_list *)calloc(1, sizeof(t_list));
    head->value = func_d(1);
    while (base_num++ < 10000)
    {
        cur = head;
        cur_value = func_d(base_num);
        while (cur != NULL && (cur->value < cur_value))
        {
            prev = cur;
            cur = cur->next;
        }
        if (cur == NULL)
        {
            prev->next = ft_lstnew(cur_value);
            if (prev->next == NULL)
                return (0);
        }
        else
        {
            if (cur->value == cur_value)
                continue ;
            cur = ft_lstnew(cur_value);
            if (cur == NULL)
                return (0);
            put_lst_to_next(prev, cur);
        }
    }
    prev = head;
    cur = head->next;
    printf("1\n");
    while (cur)
    {
        start = prev->value;
        end = cur->value;
        if (end - start < 2)
            ;
        else
        {
            while (++start < end)
            {
                if (start > 10000)
                    return (0);
                printf("%d\n", start);
            }
        }
        prev = cur;
        cur = cur->next;
    }
}