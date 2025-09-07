        #include <iostream>
        #include<cassert>
        //checking if an array is symmetric
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

            bool isSymmetric = true;

            for (int i = 0; i < n/2 ; i++)
            {

                    if (arr[i]!=arr[n-1-i])
                    {
                        isSymmetric = false;
                        break;
                    }

            }

          std :: cout << std :: boolalpha << isSymmetric << std :: endl;

            return 0;
        }
