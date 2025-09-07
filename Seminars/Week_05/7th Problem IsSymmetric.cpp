    #include <iostream>
    #include<cassert>
    //deletes all elements which are equal to k
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

        int k;
        std :: cin >> k;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                for (int j = i; j < n - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                i--;
                n--;
            }
        }

        for (int i = 0; i < n ; ++i)
        {
            std :: cout << arr[i] << ", " << std :: endl;
        }

       return 0;
    }
