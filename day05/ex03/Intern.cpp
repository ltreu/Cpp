/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:02:52 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:02:55 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    _functions[0] = &Intern::_newPresidentialPardonForm;
    _functions[1] = &Intern::_newRobotomyRequestForm;
    _functions[2] = &Intern::_newShrubberyCreationForm;
    return ;
}

Intern::Intern(const Intern &src)
{
    *this = src;
    return ;
}

Intern::~Intern(void)
{
    return ;
}

Intern
&Intern::operator= (const Intern &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

std::string
Intern::_names[3] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
};


Form*
Intern::makeForm(std::string name, std::string target)
{
    try
    {
        return _searchForm(name, target);
    }
    catch (std::exception &e)
    {
        std::cout << name << " : form not found... :(" << std::endl;
        return NULL;
    }
}

Form*
Intern::_searchForm(std::string name, std::string target)
{
    for (int i = 0; i < 3; i += 1)
    {
        if (name == this->_names[i])
            return (this->*_functions[i])(target);
    }
    std::cout << "Form not found" << std::endl;
    return (NULL);
}

Form*
Intern::_newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form*
Intern::_newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form*
Intern::_newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
