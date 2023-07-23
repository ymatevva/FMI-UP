#include <iostream>
// how can we know if a point is inside a rectangle

int main()
{   double lx, ly, rx ,ry;
    std :: cin >> lx >> ly>> rx>> ry;
    double x,y;
    std :: cin >> x >> y;
    if (x>=lx && x <= rx && y >= ly && y <= ry)
    {
        std :: cout << "The points is inside the rectangle." << std :: endl;
    }
    else
    {
        std :: cout << "The point is outside the rectangle." << std :: endl;
    }
    return 0;


}