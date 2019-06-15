/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:04:08 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:04:14 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>
# include <iostream>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);

    ~RobotomyRequestForm(void);

    RobotomyRequestForm     &operator= (const RobotomyRequestForm &rhs);

    virtual void            execute(const Bureaucrat &executor) const;

private:
    static const int        _sign;
    static const int        _exec;
};

#endif
