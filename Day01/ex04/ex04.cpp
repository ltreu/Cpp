/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:48:07 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:48:20 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int
main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *ptr = &str;
    std::string     &ref = str;

    std::cout << "String    : " << str << std::endl;
    std::cout << "Pointer   : " << *ptr << std::endl;
    std::cout << "Reference : " << ref << std::endl;
    return (0);
}
