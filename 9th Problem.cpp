 //
    // Created by YoanaM on 7/5/2023.
    //
    #include<iostream>
    #include<iomanip>
    int main()
    {

        int numb;
        std::cin >> numb;
       
        //std::cout << std::boolalpha << ((numb % 2) == 0) << std::endl;
        std::cout << std::boolalpha << ((numb & 1) != 1) << std::endl;

        return 0;
    }
