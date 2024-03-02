#include <iostream> 
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numbers[7];
    int maxNum;

 
    for (int i = 0; i < 7; i++) {
        std::cout << "Введите число " << (i + 1) << ": ";
        std::cin >> numbers[i];
    }

    
    maxNum = numbers[0];
    for (int i = 1; i < 7; i++) 
    {
        if (numbers[i] > maxNum) 
        {
            maxNum = numbers[i];
        }
    }

    
    std::cout << "Максимальное число: " << maxNum;

    return 0;
}