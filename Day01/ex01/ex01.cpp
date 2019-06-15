/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:12:35 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/04 18:47:57 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void
memoryleak(void)
{
    std::string*        pathere = new std::string("String pathere");
    std::cout << *pathere << std::endl;
    delete pathere;
}