// KytyzRepo1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

    
    int main()
    {
        setlocale(LC_ALL, "ru");
        int a, b, c;
        char z;
        std::cout << "Первое число: ";
        std::cin >> a;
        std::cout << "Второе число: ";
        std::cin >> b;
        std::cout << "Действие: ";
        std::cin >> z;
        switch (z)
        {
        case '+':
        {
            c = a + b;
            std::cout << "результат: " << c << std::endl;

            break;
        }
        case '-':
        {
            c = a - b;
            std::cout << "результат: " << c << '\n';
            break;
        }
        case '*':
        {
            c = a * b;
            std::cout << "результат: " << c << '\n';
            break;
        }
        case '/':
        {
            c = a / b;
            std::cout << "результат: " << c << '\n';
            break;
        }
        case '%':
        {
            c = a % b;
            std::cout << "результат: " << c << '\n';
            break;
        }
        default:
            std::cout << "Не верное значение.";
        }
        

    }
}
