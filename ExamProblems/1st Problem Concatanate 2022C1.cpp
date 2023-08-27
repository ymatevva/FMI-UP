#include <iostream>
#include<cmath>

//N = A . K . B
int a,b;
int digitsCount(int number)
{
    int count = 0;
    while(number > 0)
    {
        count ++;
        number/=10;
    }

    return count;
}
bool concatenate(int N, int K)
{
    int maxA = pow(10,digitsCount(N)- digitsCount(K));

        for (int A = 1; A < maxA;++A)
        {
            int remainingDigits = digitsCount(N) - digitsCount(K) - digitsCount(A);
            int maxB = pow(10, remainingDigits);

        for (int B = 1; B < maxB; ++B)
        {
            if (digitsCount(N) == digitsCount(A) + digitsCount(K) + digitsCount(B))
            {
                if (N == A * pow(10, remainingDigits + digitsCount(K)) + K * pow(10, remainingDigits) + B) {
                    a = A;
                    b = B;
                    return true;

                }
            }
        }
    }

    return false;
}

int main()
{
    int N, K;
    std :: cin >> N >> K;

    bool canBeConcatenated = concatenate(N,K);

    if (canBeConcatenated)
    {
        std :: cout << "Can be concatenated" << std :: endl;
        std :: cout << a << " " <<b;
    }
    else
    {
        std :: cout << "Can't be concatenated" << std :: endl;
    }


    return 0;
}