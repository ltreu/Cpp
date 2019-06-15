/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:03:03 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:03:05 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <stdexcept>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:

    Intern(void);
    Intern(const Intern& src);

    ~Intern(void);

    Intern                        &operator= (const Intern& rhs);

    Form                        *makeForm(std::string name, std::string target);

    typedef Form* (Intern::*InternFPointer)(std::string);

private:
    Form*                        _searchForm(std::string n, std::string t);
    Form*                        _newPresidentialPardonForm(std::string target);
    Form*                        _newRobotomyRequestForm(std::string target);
    Form*                        _newShrubberyCreationForm(std::string target);

    InternFPointer                _functions[3];
    static std::string            _names[3];
};

#endif
