/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:08:58 by frthierr          #+#    #+#             */
/*   Updated: 2019/10/20 17:40:53 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*nav;

	if (!alst || !new)
		return ;
	nav = *alst;
	if (!nav)
		nav = new;
	else
	{
		nav = ft_lstlast(nav);
		nav->next = new;
	}
}
