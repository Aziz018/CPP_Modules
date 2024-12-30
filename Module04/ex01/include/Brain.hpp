/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:38:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/30 08:33:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# define B_NUM 100

# include <iostream>

class Brain {
    protected:
        std::string ideas[B_NUM];
    public:
        Brain();
        Brain( const Brain& brain );
        ~Brain();
        Brain& operator= ( const Brain& copy );
};

# endif // BRAIN_HPP