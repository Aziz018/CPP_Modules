/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:52:43 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/09 17:35:57 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Complex {
    private:
        double real, img;
    public:
        Complex() : real(0.0), img(0.0) {}
        Complex(double r, double i) : real(r), img(i) {}
        
        Complex operator+ (const Complex& c) const {
            return Complex(this->real + c.real, this->img + c.img); 
        }
        
        Complex operator- (const Complex& c) {
            return Complex(this->real - c.real, this->img - c.img);
        }
        
        Complex operator* (const Complex& c) {
            return Complex(
                this->real * c.real - this->img * c.img, // Real part
                this->real * c.img + this->img * c.real  // Imaginary part
            );
        }
        
        Complex operator/ (const Complex& c) {
            if (c.real == 0.0 && c.img == 0.0) {
                throw std::invalid_argument("Division by zero");
            }
            
            double denominator = c.real * c.real + c.img * c.img;
            return Complex(
                (this->real * c.real + this->img * c.img) / denominator, // Real part
                (this->img * c.real - this->real * c.img) / denominator  // Imaginary part
            );
        }
        
        friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
            os << c.real;
            if (c.img >= 0) {
                os << " + " << c.img << "i";
            } else {
                os << " - " << -c.img << "i";  // Handle negative imaginary part
            }
            return os;
        }

        void display() const {
            std::cout << real << " + " << img << "i" << std::endl;
        }
};

int main() {
    Complex c1(4, 5);
    Complex c2(2, -3);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    Complex c6 = c1 / c2;

    std::cout << "Addition:       " << c1 << " and " << c2 << ": ";
    c3.display();
    std::cout << "Subtraction:    " << c1 << " and " << c2 << ": ";
    c4.display();
    std::cout << "Multiplication: " << c1 << " and " << c2 << ": ";
    c5.display();
    std::cout << "Division:       " << c1 << " and " << c2 << ": ";
    c6.display();

    return 0;
}