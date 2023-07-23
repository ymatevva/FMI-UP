        #include <iostream>
        #include<cassert>
//inserting element m on position k and then shifting the elements after m to the right
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

            int m;
            std :: cin >> m;

            int k;
            std :: cin >> k;

            for (int i = n; i > k; i--)
            {
                arr[i] = arr[i - 1];
            }

            // Insert m at position k
            arr[k] = m;

            n++; // Increase the size of the array


            for (int i = 0; i < n ; ++i)
            {
                std :: cout << arr[i] << ", " << std :: endl;
            }

           return 0;
        }
