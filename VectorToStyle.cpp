#include <iostream>

class Vector
{

private:

    double x;
    double y;
    double z;

public:
    
    Vector()
    {
        std::cout << "Input X, Y and Z" << "\n";

        std::cin >> x;
        std::cin >> y;
        std::cin >> z;
    }

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
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

    Vector v; 
    v.GetV();
    v.Magnitude();

}