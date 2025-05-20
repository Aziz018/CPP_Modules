// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   MyStack.cpp                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/02 13:51:34 by aelkheta@st       #+#    #+#             */
// /*   Updated: 2025/02/02 13:51:37 by aelkheta@st      ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <iostream>
// #include <vector>
// #include <list>

// template <typename T, typename Container = std::vector<T> >
// class MyStack {
// public:
//     typedef Container container_type;  // Define container_type

// private:
//     Container c;  // Internal container

// public:
//     void push(const T& value) { c.push_back(value); }
//     void pop() { c.pop_back(); }
//     T& top() { return c.back(); }
//     bool empty() const { return c.empty(); }
//     size_t size() const { return c.size(); }

//     // Access to iterator types from container_type
//     typedef typename container_type::iterator iterator;
//     typedef typename container_type::const_iterator const_iterator;

//     iterator begin() { return c.begin(); }
//     iterator end() { return c.end(); }
//     const_iterator begin() const { return c.begin(); }
//     const_iterator end() const { return c.end(); }
// };

// int main() {
//     MyStack<int> s;  // Uses default container (std::vector<int>)
    
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     std::cout << "Stack contents: ";
//     for (MyStack<int>::iterator it = s.begin(); it != s.end(); ++it) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
