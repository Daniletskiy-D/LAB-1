#include <iostream>
#include <locale>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    std::cout << "Введите число n для вычисления n-го числа Фибоначчи: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Число n должно быть неотрицательным." << std::endl;
    } else {
        int result = fibonacci(n);
        std::cout << "Число Фибоначчи для n = " << n << " равно " << result << std::endl;
    }
    return 0;
}