#include <iostream>

using namespace std;

template <class T> 

class Swapper {
public:
    static void Swap(T& x, T& y) 
    {
        T Temp = x;
        x = y;
        y = Temp;
    }
};

int main()
{
    double a = 3.5;
    double b = 5.5;

    cout << "Before: " << a << "  |  " << b << endl;

    Swapper<double>::Swap(a, b);

    cout << "After: " << a << "  |  " << b << endl;

}

