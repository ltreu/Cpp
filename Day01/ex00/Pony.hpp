/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:57:06 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 08:41:23 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

// class name which is pony
class Pony
{
public:
    Pony(void);    // representing ponyonthe heap.
    ~Pony(void);   // representing ponyon the stack.
    void        setName(std::string);  //assigning variables for the pony in order to build the heap with info.
    void        setMark(std::string);
    void        setAge(std::string);
    void        setColor(std::string);
    std::string getName(void);
    std::string getMark(void);
    std::string getAge(void);
    std::string getColor(void);   // setting em to a void cause there are no info/data assigned to these strings yet.

private:
    std::string _name;
    std::string _mark;
    std::string _age;
    std::string _color;
};

#endif