/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:39:16 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/13 14:39:19 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "ScalarConversion.hpp"

int          getPrecision(char *str);

void         checkChar(ScalarConversion scalar, double value);
void         checkInt(ScalarConversion scalar, double value);
void         checkDouble(ScalarConversion scalar, double value, int precision);
void         checkFloat(ScalarConversion scalar, double value, int precision);


#endif
