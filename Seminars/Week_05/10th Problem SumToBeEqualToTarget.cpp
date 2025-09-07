       #include <iostream>
        #include<cassert>
        //the closest num to the average of the elements
        int main()
        {
            const int MAX_SIZE = 20;
            int arr[MAX_SIZE];

            int n;
            std :: cin >> n;
            int sum = 0;

            for (int i = 0; i < n; i++)
            {
                std :: cin >> arr[i];
                sum+= arr[i];
            }

          int average = sum/n;
          int closest = arr[0];

            for (int i = 0; i < n ; i++)
            {
                if (abs(average - arr[i]) < closest)
                {
                    closest = arr[i];
                }
            }

            std :: cout << closest << std :: endl;

            return 0;
        }
