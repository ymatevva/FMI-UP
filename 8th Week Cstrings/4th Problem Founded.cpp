#include<iostream>
//Да се прочете изречение от конзолата и да се изведе за всеки символ
// дали се среща и колко пъти се среща във въведеното изречение
// (да се въвежда до знака '!').


const int MAX_ASCII = (1 << 8) - 1;//represents the max ascii value
// bc when we iterate thorugh the array we can read all symbols
int main()
{

    int symbols[MAX_ASCII] = {0};

    char ch;
  //  int index = 0;

    do{  //to read symbols until we read !
        std :: cin.get(ch);
        symbols[(int)ch]++;
    }
    while( ch != '!');

    for (int i = 0; i < MAX_ASCII ; ++i)
    {
        if (symbols[i] != 0)//тоест пишем само сивмолите, които са били срещнати поне веднъж
        {
            std::cout<< (char)i << " -- " << symbols[i] << std :: endl;
        }
    }
    
    return 0;
}