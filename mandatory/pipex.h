/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:58:10 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/02 18:58:12 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/wait.h>
# include "../libft/include/libft.h"

typedef struct s_pipex
{
	char	**argv;
	int		fd[2];
	int		file1;
	int		file2;
	char	**cmd1;
	char	**cmd2;
}t_pipex;

void	pipex_parsing(t_pipex *pip, char **envr);
void	ps_error(char *str);

#endif
