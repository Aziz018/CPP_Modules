#include <bitset>
#include <iostream>
 
using bin = std::bitset<8>;
 
void show(bin z, const char* s, int n)
{
    if (n == 0) std::cout << "┌─────────┬──────────┐\n";
    if (n <= 2) std::cout << "│ "<<s<<" │ " <<z<<" │\n";
    if (n == 2) std::cout << "└─────────┴──────────┘\n";
}
 
struct A
{
    compl A() { std::cout << "A dtor\n"; }
};
 
int main()
{
    bin x{"01011010"}; show(x, "x      ", 0);
    bin z = compl x;   show(z, "compl x", 2);
    A a;
}