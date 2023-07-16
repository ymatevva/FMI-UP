#include <iostream>
#include<cmath>

int main()
{
    int number;
    std :: cin >> number;
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int cnt5 = 0;
    int cnt6 = 0;
    int cnt7 = 0;
    int cnt8 = 0;
    int cnt9 = 0;

    while(number>=1)
    {
        int remainder = number % 10;
        switch(remainder) {
            case 0: {
                cnt0++;
                break;
            }
            case 1: {
                cnt1++;
                break;
            }
            case 2:
            {
                cnt2++;
                break;
            }
            case 3:
            {
                cnt3++;
                break;
            }
            case 4:
            {
                cnt4++;
                break;
            }
            case 5:
            {
                cnt5++;
                break;
            }
            case 6:
            {
                cnt6++;
                break;
            }
            case 7:
            {
                cnt7++;
                break;
            }
            case 8:
            {
                cnt8++;
                break;
            }
            case 9:
            {
                cnt9++;
                break;
            }

        }
        number/=10;
    }
    std :: cout << "0: " << cnt0 << std :: endl;
    std :: cout << "1: " << cnt1 << std :: endl;
    std :: cout << "2: " << cnt2 << std :: endl;
    std :: cout << "3: " << cnt3 << std :: endl;
    std :: cout << "4: " << cnt4 << std :: endl;
    std :: cout << "5: " << cnt5 << std :: endl;
    std :: cout << "6: " << cnt6 << std :: endl;
    std :: cout << "7: " << cnt7 << std :: endl;
    std :: cout << "8: " << cnt8 << std :: endl;
    std :: cout << "9: " << cnt9 << std :: endl;

    return 0;
}
// can be done also like this
/* int n;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "The frequency of " << i << " = ";
        count = 0;
        for (int j = n; j > 0; j = j / 10)
        {
            if (j % 10 == i)
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    */
