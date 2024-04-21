 //Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
//object of this class in main method and invoke all the methods in that class.#include <iostream>
#include<iostream>
using namespace std;


class Date {
private:
    int dd, mm, yy;

public:
    // Default Constructor
    Date() {
        dd = 1;
        mm = 1;
        yy = 2000;
    }

    // Parameterized Constructor
    Date(int day, int month, int year) {
        dd = day;
        mm = month;
        yy = year;
    }

    // Getters
    int getDay() const { return dd; }
    int getMonth() const { return mm; }
    int getYear() const { return yy; }

    // Setters
    void setDay(int day) { dd = day; }
    void setMonth(int month) { mm = month; }
    void setYear(int year) { yy = year; }

    // Display function
    void display() const {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    // Creating object using default constructor
    Date defaultDate;
    cout << "Default Date:" << endl;
    defaultDate.display();

    // Creating object using parameterized constructor
    Date customDate(25, 12, 2023);
    cout << "\nCustom Date:" << endl;
    customDate.display();

    // Using getters and setters
    cout << "\nSetting new values using setters:" << endl;
    customDate.setDay(31);
    customDate.setMonth(10);
    customDate.setYear(2024);

    cout << "New Custom Date:" << endl;
    cout << "Day: " << customDate.getDay() << ", "
         << "Month: " << customDate.getMonth() << ", "
         << "Year: " << customDate.getYear() << endl;

    return 0;
}


