/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:02:57 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/14 17:34:38 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>
#include <iomanip>

int main() {
    Data data = {16, "Hamid", "barda"};
    
    uintptr_t uptr = Serializer::serialize(&data);
    std::cout << "After Serialization: " << std::hex << &data << std::endl;
    std::cout << "After Serialization: " << std::hex << "0x" << uptr << std::endl;

    std::cout << std::endl;

    Data* data_ptr = Serializer::deserialize(uptr);
    std::cout << "After Deserialization: " << data_ptr->age << std::endl;
    std::cout << "After Deserialization: " << data_ptr->firstName << std::endl;
    std::cout << "After Deserialization: " << data_ptr->lastName << std::endl;

    return 0;
}