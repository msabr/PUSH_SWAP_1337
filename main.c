/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:33:48 by msabr             #+#    #+#             */
/*   Updated: 2025/03/12 02:00:44 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc > 2)
	{
		if (!check_args(argc, argv))
			print_error();
		stack_a = fill_stack_a(argv);
		stack_b = NULL;
		if (!stack_a)
			print_error();
		sort(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
	}
	return (0);
}
