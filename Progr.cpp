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

    std::cout << "������� ����� n ��� ���������� n-�� ����� ���������: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "����� n ������ ���� ���������������." << std::endl;
    } else {
        int result = fibonacci(n);
        std::cout << "����� ��������� ��� n = " << n << " ����� " << result << std::endl;
    }
    return 0;
}