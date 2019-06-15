/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:03:17 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:03:24 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int
main(void)
{
    Form *f1;
    Form *f2;
    Form *f3;
    Form *f4;
    Intern i1;
    Bureaucrat b1 = Bureaucrat("Mr. Abraham", 42);

    f1 = i1.makeForm("robotomy request", "Marvin");
    f2 = i1.makeForm("presidential pardon", "Marvin");
    f3 = i1.makeForm("shrubbery creation", "Marvin");
    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;

    b1.signForm(*f1);
    b1.executeForm(*f1);

    f4 = i1.makeForm("TEST", "Marvin");

    return (0);
}
