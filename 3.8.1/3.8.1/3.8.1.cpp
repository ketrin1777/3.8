// 3.8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int get_size(std::string str, int forbidden_lenght)
{
    int size = str.length();
        if (size == forbidden_lenght)
        {
            throw std::string{"Вы ввели слово запретной длины! До свидания!"};
        }
    return size;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_lenght;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_lenght;

    while (true) {
        std::string str;
        std::cout << "Введите слово: ";
        std::cin >> str;
        try
        {
            std::cout << "Длина слова \"" << str.length() << "\" равна " << get_size(str, forbidden_lenght);
        }
        catch (std::string& e)
        {
            std::cout << e << std::endl;
            return 0;
        }
    }
    return 0;
}