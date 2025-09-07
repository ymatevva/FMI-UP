#include <iostream>

int main()
{
   //how to declarate static array
   // int arr[100];

   //how to input data into a static array
   //int arr[10];
   //for(i = 0; i < 10; i++){
   // std :: cin >> arr[i];}

  //finding size of a static array:
  //int size = sizeof(arr) / sizeof(arr[0]);

//подаваме масив на функция като пойнтър към 1-ия елемент

    const int MAX_SIZE = 100;

    int arr[MAX_SIZE];
    int n;
    std :: cin >> n;
    //first we should input the elements
    for (int i = 0; i < n ; i++)
    {
        std :: cin >> arr[i];
    }
    // then we output them in their original order
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ", ";
    }
    std :: cout << std:: endl;
    // and the last thing to do is to output them in reverse order too
    for (int i = n-1; i >= 0; i--)
    {
        std :: cout << arr[i] << ", ";
    }

    return 0;
}


