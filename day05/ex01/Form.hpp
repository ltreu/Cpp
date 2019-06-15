/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 06:43:10 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 06:43:14 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form
{
public:

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException(void);
        GradeTooHighException(const GradeTooHighException &src);

        virtual ~GradeTooHighException(void) throw();

        GradeTooHighException &operator= (const GradeTooHighException &rhs);

        virtual const char    *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException(void);
        GradeTooLowException(const GradeTooLowException &src);

        virtual ~GradeTooLowException(void) throw();

        GradeTooLowException  &operator= (const GradeTooLowException &rhs);

        virtual const char    *what() const throw();
    };

    Form(void);
    Form(const Form &src);
    Form(std::string name, int grade_to_sign, int grade_to_execute);

    ~Form(void);

    Form                      &operator= (const Form &rhs);

    void                      beSigned(Bureaucrat &bureaucrat);

    bool                      getSigned(void) const;
    int                       getGradeToSign(void) const;
    int                       getGradeToExecute(void) const;
    std::string               getName(void) const;

private:
    bool                      _signed;
    const int                 _grade_to_sign;
    const int                 _grade_to_execute;
    const std::string         _name;
};

std::ostream                  &operator<< (std::ostream &out, const Form &rhs);

#endif
