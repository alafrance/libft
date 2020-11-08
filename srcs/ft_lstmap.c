/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:45:05 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/06 12:45:15 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_list;
    t_list *tail;

    if (lst == NULL)
        return (NULL);
    if (!(new_list = ft_lstnew(f(lst->content))))
    {
        ft_lstclear(&lst, del);
        return (NULL);
    }
    tail = new_list;
    lst = lst->next;
    while (lst)
    {
        if (!(tail->next = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&lst, del);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        tail = tail->next;
        lst = lst->next;
    }
    return (new_list);
}