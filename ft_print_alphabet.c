/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:09:27 by ltranca-          #+#    #+#             */
/*   Updated: 2023/04/13 15:38:40 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    int a;
    
    a = 97;
    while (a < 123)
    {
        write(1, &a, 1);
        a++;
    }
}
/*
int main()
{
    ft_print_alphabet();
}*/

