        #include <iostream>
        #include<cassert>
        //the closest num to the average of the elements
        int main()
        {
            const int MAX_SIZE = 20;
            int arr1[MAX_SIZE];

            int size1;
            std :: cin >> size1;



            for (int i = 0; i < size1; i++)
            {
                std :: cin >> arr1[i];
            }

            int arr2[MAX_SIZE];
            int size2;
            std :: cin >> size2;

            for (int i = 0; i < size2; i++)
            {
                std :: cin >> arr2[i];
            }

            //intersection

            for (int i = 0; i < size1 ; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        std :: cout << arr1[i] << " ";
                        break;
                    }
                }
            }
            std :: cout << std :: endl;

            // difference and to be divided by 3 without remainder

            for (int i = 0; i < size1 ; i++)
            {
                bool notContained = true;
                for (int j = 0; j < size2; j++)
                {
                    if (arr1[i] = arr2[j])
                    {
                        notContained = false;
                    }
                }

                if (arr1[i] % 3 == 0 && notContained == true)
                {
                    std :: cout << arr1[i] << " ";
                }
            }

           std::cout<<std::endl;
            return 0;
        }
