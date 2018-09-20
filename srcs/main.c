/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 05:05:22 by qpeng             #+#    #+#             */
/*   Updated: 2018/09/19 17:20:04 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		b_printf(const char *format, ...);

int		main(void)
{
   	char s[] = "HellO";
 	int n = -12345;
	printf("%d\n", b_printf("%s %s %c %d %o %u    ___  %x %p %x %o %  %\n", s, NULL, *s, -36363, -9991929, 1234, -36363, s, n, n));
	printf("%d\n", printf("%s %s %c %d %o %u    ___  %x %p %x %o %  %\n", s, NULL, *s, -36363, -9991929, 1234, -36363, s, n, n));
 	b_printf("[% %\n]\n");
	printf("[% %\n]\n");
	return (0);
}
