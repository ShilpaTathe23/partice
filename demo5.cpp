//Write a program to calculate factors of a given number
#include <iostream>
using namespace std;

void printFactors(int num) {
    std::cout << "Factors of " << num << " are:" << std::endl;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    printFactors(number);
    
    return 0;
}