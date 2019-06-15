/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:00:45 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 07:00:48 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);

    ~PresidentialPardonForm(void);

    PresidentialPardonForm  &operator= (const PresidentialPardonForm &rhs);

    virtual void            execute(const Bureaucrat &executor) const;

private:
    static const int        _sign;
    static const int        _exec;
};

#endif
