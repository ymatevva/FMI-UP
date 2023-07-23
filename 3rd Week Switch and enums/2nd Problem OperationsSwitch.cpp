#include <iostream>

//operations with two numbers

int main()
{
    int a, b;
    std::cin >> a >> b;

    char operation;
    std::cin >> operation;

    switch(operation)
    {
        case '+':
            std :: cout << a + b << std :: endl;
            break;
        case '*':
            std :: cout << a * b << std :: endl;
            break;
        case '-':
            std :: cout << a - b << std :: endl;
            break;
        case '/':
        {
            if (b==0)
            {
                std::cout << "error" << std :: endl;
            }
            else
            {
                std :: cout << a / b << std :: endl;
                break;
            }
        }

        case '%':
            if (b==0)
            {
                std::cout << "error" << std :: endl;
            }
            else
            {
                std :: cout << a % b << std :: endl;
                break;
            }
        default:
            std :: cout << "Error!" << std :: endl;
            break;

    }

    return 0;
}