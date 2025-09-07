#include <iostream>
#include<cassert>
//finding the position of the biggest number in the array
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
        //then setting a variable for the biggest number
        int biggestIndex = 0;
        //checking which is the biggest
        for (int i = 0; i < n ; i++)
        {
            if (arr[i]>=arr[biggestIndex])
            {
                biggestIndex = i;
            }
        }
        std :: cout << "The index of the biggest element is: " << biggestIndex << "." << "The biggest element is: " << arr[biggestIndex] << std :: endl;

        return 0;

}
