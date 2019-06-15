/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:00:21 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:00:24 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


static void
signAndExecuteForms(Bureaucrat b, ShrubberyCreationForm f1, \
                    RobotomyRequestForm f2, PresidentialPardonForm f3)
{
    try
    {
        b.signForm(f1);
        b.signForm(f2);
        b.signForm(f3);

        b.executeForm(f1);
        b.executeForm(f2);
        b.executeForm(f3);
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
    Bureaucrat                    b1("B1", 69);
    Bureaucrat                    b2("B2", 42);
    Bureaucrat                    b3("B3", 1);
    ShrubberyCreationForm         f1("SCF_2");
    RobotomyRequestForm           f2("RRF_2");
    PresidentialPardonForm        f3("PDF_2");

    signAndExecuteForms(b1, f1, f2, f3);
    std::cout << std::endl;

    signAndExecuteForms(b2, f1, f2, f3);
    std::cout << std::endl;

    signAndExecuteForms(b3, f1, f2, f3);
    std::cout << std::endl;

    return (0);
}
