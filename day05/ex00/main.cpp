/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 06:41:45 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 06:41:48 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"

static void
checkBureaucrat(Bureaucrat test, int min, int max)
{
    try
    {
        for(int i = min; i <= max; i++)
        {
            test.setGrade(i);
            //test.incrementGrade();
            //test.decrementGrade();
            std::cout << test << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int
main(void)
{
    Bureaucrat    test("Marvin", 42);

    checkBureaucrat(test, test.getGrade(), 150);
    return (0);
}
