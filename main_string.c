/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:13:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 12:14:02 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_string(void)
{
	char *s = "Hinata";
	printf("__STRING__TEST__\n");
	printf("%%s\n");
	printf("[%s]\n",s);
	ft_printf("[%s]\n",s);
	printf("%%3s\n");
	printf("[%3s]\n",s);
	ft_printf("[%3s]\n",s);
	printf("%%.3s\n");
	printf("[%.3s]\n",s);
	ft_printf("[%.3s]\n",s);
	printf("[%%3.3s]\n");
	printf("[%3.3s]\n",s);
	ft_printf("[%3.3s]\n",s);
	printf("[%%-3s]\n");
	printf("[%-3s]\n",s);
	ft_printf("[%-3s]\n",s);
	printf("[%%-.3s]\n");
	printf("[%-.3s]\n",s);
	ft_printf("[%-.3s]\n",s);
	printf("printf(\"[%%-3.3s]\",s);\n");
	printf("[%-3.3s]\n",s);
	ft_printf("[%-3.3s]\n",s);
	printf("printf(\"[%%03s]\",s);\n");
	printf("[%03s]\n",s);
	ft_printf("[%03s]\n",s);
	printf("printf(\"[%%0.3s]\",s);\n");
	printf("[%0.3s]\n",s);
	ft_printf("[%0.3s]\n",s);
	printf("printf(\"[%%.03s]\",s);\n");
	printf("[%.03s]\n",s);
	ft_printf("[%.03s]\n",s);
	printf("printf(\"[%%03.03s]\",s);\n");
	printf("[%03.03s]\n",s);
	ft_printf("[%03.03s]\n",s);
	printf("\n\n");
	printf("printf(\"[%%7s]\");\n");
	printf("[%7s]\n",s);
	ft_printf("[%7s]\n",s);
	printf("printf(\"[%%.7s]\",s);\n");
	printf("[%.7s]\n",s);
	ft_printf("[%.7s]\n",s);
	printf("printf(\"[%%7.7s]\",s);)");
	printf("[%7.7s]\n",s);
	ft_printf("[%7.7s]\n",s);
	ft_printf("[%7.7s]\n",s);
	printf("printf(\"[%%-7s]\",s);\n");
	printf("[%-7s]\n",s);
	ft_printf("[%-7s]\n",s);
	printf("printf(\"[%%-.7s]\",s);\n");
	printf("[%-.7s]\n",s);
	ft_printf("[%-.7s]\n",s);
	printf("printf(\"[%%-7.7s]\",s);\n");
	printf("[%-7.7s]\n",s);
	ft_printf("[%-7.7s]\n",s);
	printf("printf(\"[%%07s]\",s);\n");
	printf("[%07s]\n",s);
	ft_printf("[%07s]\n",s);
	printf("printf(\"[%%0.7s]\",s);\n");
	printf("[%0.7s]\n",s);
	ft_printf("[%0.7s]\n",s);
	printf("printf(\"[%%.07s]\",s);\n");
	printf("[%.07s]\n",s);
	ft_printf("[%.07s]\n",s);
	printf("printf(\"[%%07.07s]\",s);\n");
	printf("[%07.07s]\n",s);
	ft_printf("[%07.07s]\n",s);
}
