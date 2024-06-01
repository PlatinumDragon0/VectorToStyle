#include <iostream>

class Vector
{

private:

    double x;
    double y;
    double z;

public:
    
    Vector() : x(15), y(5), z(5)
    {}

    void GetV()
    {
        std::cout << "x = " << x << "\n";
        std::cout << "y = " << y << "\n";
        std::cout << "z = " << z << "\n";
    }

    void Magnitude()
    {
        double XYZ = sqrt((x * x) + (y * y) + (z * z));
        std::cout << "Magnitude = " << XYZ;
    }

};



int main()
{
    
    Vector Vrbl;
    Vrbl.GetV();
    Vrbl.Magnitude();

}