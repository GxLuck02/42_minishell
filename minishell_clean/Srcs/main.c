/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 01:52:08 by ttreichl          #+#    #+#             */
/*   Updated: 2024/05/23 05:11:49 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

int	main()
{
	char	*cmd_line;

	while (1)
	{
		cmd_line = get_prompt();
		printf("%s§\n", cmd_line);
	}
	clear_history();
	return (0);
}