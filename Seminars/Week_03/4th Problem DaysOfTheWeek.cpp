#include <iostream>
#include<cassert>
#include<cstring>

int main()
{
    int n, k, m, y;
    std :: cin >> n >> k >> m >> y;

    assert(n>=1&&n<=31);
    assert(k>=1 && k <=7);
    assert(m>=1&&m<=12);
    assert(y>0);

    std :: string dayOfTheWeek;
    std :: string month;


    switch(k) {
        case 1: {
            dayOfTheWeek = "Monday" ;
            break;
        }
        case 2: {
            dayOfTheWeek = "Tuesday";
            break;
        }
        case 3: {
            dayOfTheWeek = "Wednesday";
            break;

        }
        case 4: {
            dayOfTheWeek = "Thursday";
            break;
        }
        case 5: {
            dayOfTheWeek = "Friday";
            break;
        }
        case 6: {
            dayOfTheWeek = "Saturday";
            break;
        }
        case 7: {
            dayOfTheWeek = "Sunday";
            break;
        }
    }
    switch (m) {
        case 1:
            month = "January";
            break;
        case 2:
            month = "Febuary";
            break;
        case 3:
            month = "March";
            break;
        case 4:
            month = "April";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "June";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "August";
            break;
        case 9:
            month = "September";
            break;
        case 10:
            month = "October";
            break;
        case 11:
            month = "November";
            break;
        case 12:
            month = "December";
            break;

    }
    std :: cout << n << " " << dayOfTheWeek << " " << month << " " << y << std :: endl;


    return 0;
}