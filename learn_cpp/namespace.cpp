#include <iostream>
using namespace std;

// first name space

namespace example
{
    void func()
    {
        cout << "This is an example" << endl;
    }
}

namespace first_space
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }
    // second name space
    namespace second_space
    {
        void func()
        {
            cout << "Inside second_space" << endl;
        }
    }
}

using namespace first_space::second_space;
using namespace example;

int main ()
{
    // This calls function from second name space.
    example::func();

    return 0;
}
