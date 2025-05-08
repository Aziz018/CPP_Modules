#pragma once

#include <iostream>


template <typename T>
class Slack {
    private:
        T _data;
    public:
        T getData() const;
        void setData(T value);

        Slack() {}
        Slack(T value) : _data(value) {}
        ~Slack() {}
};

template <typename T>
T Slack<T>::getData() const {
    return this->_data;
}

template <typename T>
void Slack<T>::setData(T value) {
    this->_data = value;
}
