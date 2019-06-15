/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:52:58 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:53:05 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>

class Brain
{
public:
    Brain(void);
    ~Brain(void);
    void        setAddress(void);
    std::string getAddress(void);
    std::string identify(void);

private:
    std::string _address;
};

#endif
