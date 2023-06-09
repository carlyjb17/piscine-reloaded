/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:03:00 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/20 18:25:12 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int	main(int argc, char **argv)
{
	int		indexp;
	int		indexc;
	char	jmp;

	jmp = '\n';
	if (argc < 1)
		return (0);
	indexp = 1;
	while (argv[indexp])
	{
		indexc = 0;
		while (argv[indexp][indexc])
		{
			ft_putchar(&argv[indexp][indexc]);
			indexc++;
		}
		ft_putchar(&jmp);
		indexp++;
	}
}
