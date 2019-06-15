/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getPrecision.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:39:25 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/13 14:39:27 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>

int
getPrecision(char *str)
{
    unsigned int     before;
    unsigned int     after;

    before = 0;
    while (str[before] && str[before] != '.')
    {
        before += 1;
    }
    after = before + 1;
    while (str[after] && isdigit(str[after]))
    {
        after += 1;
    }
    after -= before;
    return ((strlen(str) == before || after == 1) ? 1 : after - 1);
}
