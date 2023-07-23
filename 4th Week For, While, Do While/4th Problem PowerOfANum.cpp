#include <iostream>

int main()
{
    double n, m;
    std :: cin >> n >> m;
    double result = 1;
    if (m < 0)
    {
        m *= -1;

        for (int i = 0; i < m; i++)
        {
            result *= n;
        }
        std :: cout << 1/result << std :: endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            result *= n;
        }
        std::cout << result << std::endl;
    }

    return 0;

}