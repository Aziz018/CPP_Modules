/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:42:07 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/05 20:17:48 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <exception>

class BitcoinExchange
{
    private:
        /* data */
    public:
        BitcoinExchange(const std::string& db);
        ~BitcoinExchange();
};

#endif // BITCOIN_EXCHANGE_HPP