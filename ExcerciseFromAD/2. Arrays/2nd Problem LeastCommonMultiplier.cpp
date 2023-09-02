#include<iostream>
const int MAX_SIZE = 50;
int GCD(int A,int B)
{
    while(B!=0)
    {
        int temp = B;
        B = A%B;
        A= temp;
    }
    return A;
}
int leastCommonMultiplier(int a, int b)
{
  return(a*b)/ GCD(a,b);
}
int findLCMInArray(int arr[], int n)
{
    if (n<2)
        return -1;

    int result = arr[0];

    for (int i = 1; i < n; ++i)
    {
        result+= leastCommonMultiplier(result,arr[i]);
    }
    return result;
}
int  main()
{
   int n;
   std::cin>>n;
   int arr[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        std::cin>>arr[i];
    }

    int result = findLCMInArray(arr,n);

    if (result!=-1)
    {
        std::cout << result << std::endl;
    }


    return 0;
}