/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:33:38 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/13 18:33:41 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <list>
# include <vector>
# include <iostream>
# include <algorithm>

template <typename T>
void
easyfind(T &container, int n)
{
    typename    T::const_iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
    {
        std::cout << "Value exists." << std::endl;
    }
    else
    {
        throw (std::string("Value doesn't exist in the container."));
    }
}

#endif
