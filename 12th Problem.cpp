        #include <iostream>
        #include<cassert>
        //the closest num to the average of the elements
        int main()
        {
            const int MAX_SIZE = 20;
            int arr[MAX_SIZE];

            int size;
            std :: cin >> size;

            for (int i = 0; i < size ; i++)
            {
                std :: cin >> arr[i];
            }

            int target;
            std :: cin >> target;

            for (int i = 0; i < size; i++)
            {
                for (int j = i; j < size; j++)
                {
                    if ((arr[i] + arr[j]) == target)
                    {
                        std :: cout << i << ", " << j << std :: endl;
                        break;
                    }
                }
            }
            return 0;
        }
