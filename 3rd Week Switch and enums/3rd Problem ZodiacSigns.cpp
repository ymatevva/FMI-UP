#include <iostream>
//break should be included after every if constructions

int main()
{
    int day, month;
    std :: cin >> day >> month;
    switch (month) {

        case 1:
        {
            if (day >= 1 && day <= 18)
            {
                std :: cout << "Capricorn" << std :: endl;
            }
            else if(day >= 19 && day <= 31 )
            {
                std :: cout << "Aquarius" << std :: endl;
            }
        }
        case 2:
        {
            if (day >= 1 && day <= 18)
            {
                std :: cout << "Aquarius" << std :: endl;
            }
            else if(day >= 19 && day <= 28 )
            {
                std :: cout << "Pisces" << std :: endl;
            }
        }
        case 3:
        {
            if (day >= 1 && day <= 20)
            {
                std :: cout << "Pisces" << std :: endl;
            }
            else if(day >= 21 && day <= 31 )
            {
                std :: cout << "Aries" << std :: endl;
            }
        }
        case 4:
        {
            if (day >= 1 && day <= 19)
            {
                std :: cout << "Aries" << std :: endl;
            }
            else if(day >= 20 && day <= 30 )
            {
                std :: cout << "Taurus" << std :: endl;
            }
        }
        case 5:
        {
            if (day >= 1 && day <= 20)
            {
                std :: cout << "Taurus" << std :: endl;
            }
            else if(day >= 21 && day <= 31 )
            {
                std :: cout << "Gemini" << std :: endl;
            }
        }
        case 6:
        {
            if (day >= 1 && day <= 20)
            {
                std :: cout << "Gemini" << std :: endl;
            }
            else if(day >= 21 && day <= 30 )
            {
                std :: cout << "Cancer" << std :: endl;
            }
        }
        case 7:
        {
            if (day >= 1 && day <= 21)
            {
                std :: cout << "Cancer" << std :: endl;
            }
            else if(day >= 22 && day <= 31 )
            {
                std :: cout << "Leo" << std :: endl;
            }
        }
        case 8:
        {
            if (day >= 1 && day <= 22)
            {
                std :: cout << "Leo" << std :: endl;
            }
            else if(day >= 23 && day <= 30 )
            {
                std :: cout << "Virgo" << std :: endl;
            }
        }
        case 9:
        {
            if (day >= 1 && day <= 22)
            {
                std :: cout << "Virgo" << std :: endl;
            }
            else if(day >= 23 && day <= 31 )
            {
                std :: cout << "Libra" << std :: endl;
            }
        }
        case 10:
        {
            if (day >= 1 && day <= 22)
            {
                std :: cout << "Libra" << std :: endl;
            }
            else if(day >= 23 && day <= 30 )
            {
                std :: cout << "Scorpio" << std :: endl;
            }
        }
        case 11:
        {
            if (day >= 1 && day <= 21)
            {
                std :: cout << "Scorpio" << std :: endl;
            }
            else if(day >= 22 && day <= 31 )
            {
                std :: cout << "Sagittarius" << std :: endl;
            }
        }
        case 12:
        {
            if (day >= 1 && day <= 21)
            {
                std :: cout << "Sagittarius" << std :: endl;
            }
            else if(day >= 22 && day <= 30 )
            {
                std :: cout << "Capricorn" << std :: endl;
            }
        }

    }
//it can be done the following way
/*
  switch(month)
  case 1:{
  std :: cout << (day <= 18 ? "Capricorn" : "Aquaruis") << std :: endl;
  break;}

 */
/*2nd Problem
    int input;
    std::cin >> input;
    switch (input)
    {
        case Capricorn:
            std::cout << "Dec 22 - Jan 19" << std::endl;
            break;
        case Aquarius:
            std::cout << "Jan 20 - Feb 18" << std::endl;
            break;
        case Pisces:
            std::cout << "Feb 19 - Mar 20" << std::endl;
            break;
        case Aries:
            std::cout << "Mar 21 - Apr 19" << std::endl;
            break;
        case Taurus:
            std::cout << "Apr 20 - May 20" << std::endl;
            break;
        case Gemini:
            std::cout << "May 21 - Jun 20" << std::endl;
            break;
        case Cancer:
            std::cout << "Jun 21 - Jul 22" << std::endl;
            break;
        case Leo:
            std::cout << "Jul 23 - Aug 22" << std::endl;
            break;
        case Virgo:
            std::cout << "Aug 23 - Sept 22" << std::endl;
            break;
        case Libra:
            std::cout << "Sept 23 - Oct 22" << std::endl;
            break;
        case Scorpio:
            std::cout << "Oct 23 - Nov 21" << std::endl;
            break;
        case Sagittarius:
            std::cout << "Nov 22 - Dec 21" << std::endl;
            break;
        default:
            std::cout << "Wrong input!" << std::endl;
    }*/
    return 0;
}