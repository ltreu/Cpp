/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:40:17 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/13 14:40:20 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <cstdlib>
#include <iostream>

struct Data
{
    int            n;
    std::string    s1;
    std::string    s2;
};

void
*serialize(void)
{
    Data           *ret = new Data;
    static char    set[] = "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                           "1234567890";

    for (int i = 0; i < 8; i += 1)
    {
        ret->s1 += set[rand() % sizeof(set)];
    }
    ret->n = rand() * (rand() & 1 ? 1 : -1);
    for (int i = 0; i < 8; i += 1)
    {
        ret->s2 += set[rand() % sizeof(set)];
    }
    return (ret);
}

Data
*deserialize(void *raw)
{
    Data           *ret = reinterpret_cast<Data*>(raw);
    return (ret);
}

int
main(void)
{
    srand(time(0));
    void           *ser = serialize();
    Data           *des = deserialize(ser);

    std::cout << des->s1 << std::endl \
              << des->n << std::endl \
              << des->s2 << std::endl;
    delete des;
    return (0);
}
