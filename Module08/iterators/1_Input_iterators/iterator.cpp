/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:11:12 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/02 14:39:38 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyArray {
    private:
        int data[5] = {1,2,3,4,5};
    public:
        class iterator {
            private:
                int *_ptr;
            public:
                iterator(int *ptr) : _ptr(ptr) {}
                
                bool operator!=(const iterator& other) {
                    return _ptr != other._ptr;
                }
                void operator++() {
                    ++_ptr;
                }
                int& operator*() {
                    return *_ptr;
                }
        };
    iterator begin() {
        return iterator(data);
    }
    iterator end() {
        return iterator(data + 5);
    }

};

int main() {
    MyArray array;
    
    for (MyArray::iterator it = array.begin(); it != array.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;
}