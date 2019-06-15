/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:13:34 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 12:13:50 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

void    read_and_write(std::istream &in)
{
    std::cout << in.rdbuf();
}

int     main(int argc, char**argv)
{
    if (argc == 1)
    {
        read_and_write(std::cin);
    }
    else
    {
        for (int i = 1; i < argc; i += 1)
        {
            std::string file_name(argv[i]);
            if ( !file_name.compare("-") || !file_name.compare("--") )
            {
                read_and_write(std::cin);
            }
            else
            {
                std::ifstream   ifs(file_name);
                if ( ifs )
                {
                    read_and_write(ifs);
                }
                else
                {
                    std::cout << "Error Opening File! >:(" << std::endl;
                }
            }
        }
    }
    return (0);
}
