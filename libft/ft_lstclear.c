/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:13:45 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/28 00:36:38 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*ptr;

	temp = *lst;
	while (temp)
	{
		ptr = temp->next;
		del (temp->content);
		free (temp);
		temp = ptr;
	}
	*lst = 0;
}
