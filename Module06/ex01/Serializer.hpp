/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:03:50 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/13 15:10:00 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

class Serializer {
    private:
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
    public:
        Serializer();
        ~Serializer();
};