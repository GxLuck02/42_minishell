/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 01:54:56 by ttreichl          #+#    #+#             */
/*   Updated: 2024/05/23 05:18:14 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "greatfull_shell.h"

# define MAX_PROMPT_LENGTH   4096;

typedef enum e_separator {
    NONE,
	SPACE,// = \t, \n
    PIPE,// = |
    TRUNC, //= > 
    APPEND, //= >>
    INPUT, // = <
    HEREDOC,// = <<
	END,

}   t_separator;

typedef struct s_commands{	
    char				*complet_path;
    char				**arguments; 	//{commande, arg_1, arg_2, NULL}
    t_separator			separator;
    struct s_statement	*next;
}   t_commands;

char	*init_prompt();
int		is_valide_input(char *input);
char	*get_prompt();

#endif
