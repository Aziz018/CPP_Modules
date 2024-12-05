/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:37:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/05 13:37:47 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    typedef void (Harl::*HarlCompalin)(void);
    HarlCompalin harlCompalinFunction[4];
    std::string compalinLevel[4];

public:
    Harl();
    ~Harl();

    void complain( std::string level );
};

# endif // HARL_HPP
