/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:59:26 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/10/09 10:59:39 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**current;
	t_list	*next;

	current = lst;
	while (*current != NULL)
	{
		next = (*current)->next;
		ft_lstdelone(*current, del);
		*current = next;
	}
	*lst = NULL;
}
