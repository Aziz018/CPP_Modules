/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:38:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/16 19:47:51 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# define B_NUM 100

# include <iostream>

class Brain {
    public:
        std::string ideas[B_NUM];
        Brain();
        Brain( const Brain& brain );
        ~Brain();
        
        Brain& operator= ( const Brain& copy );
};

# endif // BRAIN_HPP