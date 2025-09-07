#include <iostream>
#include<cassert>
//finding  the biggest 3 numbers in the array
    int main()
    {
        const int MAX_SIZE = 20;

        int arr[MAX_SIZE];
        int n;
        std :: cin >> n;
        assert(n > 0 && n <= MAX_SIZE);
        //input the numbers
        for (int i = 0; i < n; i++)
        {
            std :: cin >> arr[i];
        }

        int first, second, third ;
        first = second = third = INT_MIN;
        for (int i = 0; i < n ; i++)
        {
            if (arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second)
            {
                third = second;
                second = arr[i];
            }
            else if(arr[i] > third)
            {
                third = arr[i];
            }
        }
        std :: cout << "The biggest elements are: " << first << ", " << second <<", "  << third << std :: endl;
        return 0;

}
