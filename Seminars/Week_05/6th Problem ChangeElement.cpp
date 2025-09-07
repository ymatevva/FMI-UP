    #include <iostream>
    #include<cassert>
    //checking if the sequence is increasing or decreasing

    int main()
    {
        const int MAX_SIZE = 20;
        int arr[MAX_SIZE];

        int n;
        std :: cin >> n;

        for (int i = 0; i < n; i++)
        {
            std :: cin >> arr[i];
        }

        bool isIncreasing = true;
        bool isDecreasing = true;

        for (int i = 0; i < n-1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                isIncreasing = false;
            }
            else if (arr[i + 1] > arr[i])
            {
                isDecreasing = false;
            }

        }

         if(isIncreasing && isDecreasing)
            std :: cout << "The sequence contains only equal elements." << std :: endl;
         else if (isDecreasing )
            std :: cout << "The sequence is decreasing." << std :: endl;
        else if(isIncreasing)
            std :: cout << "The sequence is increasing." << std :: endl;

        else
            std :: cout << "The sequence is neither increasing nor decreasing." << std ::endl;

return 0;
    }
