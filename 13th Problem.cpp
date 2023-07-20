       #include <iostream>
        #include<cassert>
        //the nums but only one time in the array
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

            bool found;

            for (int i = 0; i < size ; i++)
            {
                found = false;
                for (int j = i; j < size; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        bool found = true;
                        break;
                    }
                }
                if (!found)
                {
                    std::cout << arr[i] << " ";
                }
            }
            std :: cout << std :: endl;
            return 0;
        }
