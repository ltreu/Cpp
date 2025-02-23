/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:23:57 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/13 18:24:05 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void
iter(T *array, int length, void (*f)(T const &))
{
    if (array)
    {
        for (int i = 0 ; i < length; i += 1)
        {
            f(array[i]);
        }
    }
    return ;
}

template <typename T>
void
printElement(T const &element)
{
    std::cout << element << " ";
    return ;
}

int
main(void)
{
    int         numbers[] = {4, 8, 15, 15, 23, 42};
    std::string names[] = {"Locke", "Reyes", "Ford", \
                           "Jarrah", "Shephard", "Kwon"};

    std::cout << "Names   : ";
    iter(names, 6, printElement);
    std::cout << std::endl;

    std::cout << "Numbers : ";
    iter <int>(numbers, 6, printElement);
    std::cout << std::endl;

    return (0);
}
