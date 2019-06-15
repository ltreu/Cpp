/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:03:32 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:03:35 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm(void) :
    Form("Anonymous", "Presidential", \
    PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(target, "Presidential", \
    PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
    Form("Anonymous", "Presidential", \
    PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    *this = s;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm
&PresidentialPardonForm::operator= (const PresidentialPardonForm &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

void
PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << getTarget() << " has been pardoned by Zafod Beebkerox." \
              << std::endl;
    return ;
}
