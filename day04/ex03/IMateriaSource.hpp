/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:16:12 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:16:13 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef IMATERIAL_SOURCE_HPP
# define IMATERIAL_SOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual             ~IMateriaSource(void) { return ; }

        virtual void        learnMateria(AMateria*) = 0;
        virtual AMateria    *createMateria(std::string const & type) = 0;
};

#endif
