/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:07:38 by opaunas           #+#    #+#             */
/*   Updated: 2022/09/20 10:09:12 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

}*/
#include <stdio.h>
#include <string.h>
int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    //printf("%lu\n", strlcat(buffer,last,size));
    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}