/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 06:42:46 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/12 06:42:49 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat
{
public:

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException(void);
        GradeTooLowException(const GradeTooLowException &src);

        virtual ~GradeTooLowException(void) throw();

        GradeTooLowException  &operator= (const GradeTooLowException &rhs);

        virtual const char    *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException(void);
        GradeTooHighException(const GradeTooHighException &src);

        virtual ~GradeTooHighException(void) throw();

        GradeTooHighException &operator= (const GradeTooHighException &rhs);

        virtual const char    *what() const throw();
    };

    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);

    ~Bureaucrat(void);

    Bureaucrat                &operator= (const Bureaucrat &rhs);

    void                      setGrade(int grade);
    void                      setName(std::string name);
    void                      signForm(Form &form);

    void                      incrementGrade(void);
    void                      decrementGrade(void);

    int                       getGrade(void) const;
    std::string               getName(void) const;

private:
    int                       _grade;
    std::string               _name;
};

std::ostream                  &operator<< (std::ostream &out, \
                                           const Bureaucrat &rhs);

#endif
