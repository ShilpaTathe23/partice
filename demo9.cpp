#include <iostream>
#include <string>

using namespace std;

// Abstract class Employee
class Employee {
protected:
    string name;
    int employeeID;
public:
    Employee(string n, int id) : name(n), employeeID(id) {}
    virtual ~Employee() {}

    // Abstract method for calculating pay
    virtual double calculatePay() const = 0;

    // Getters
    string getName() const { return name; }
    int getEmployeeID() const { return employeeID; }
};

// Concrete class HourlyEmployee
class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    HourlyEmployee(string n, int id, double rate, int hours)
        : Employee(n, id), hourlyRate(rate), hoursWorked(hours) {}

    // Implementation of abstract method
    virtual double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

// Concrete class SalariedEmployee
class SalariedEmployee : public Employee {
private:
    double salary;
public:
    SalariedEmployee(string n, int id, double s)
        : Employee(n, id), salary(s) {}

    // Implementation of abstract method
    virtual double calculatePay() const override {
        return salary;
    }
};

int main() {
    HourlyEmployee hEmployee("John", 101, 15.5, 40);
    SalariedEmployee sEmployee("Alice", 102, 4000);

    cout << "Hourly Employee: " << hEmployee.getName() << ", ID: " << hEmployee.getEmployeeID() << ", Pay: $" << hEmployee.calculatePay() << endl;
    cout << "Salaried Employee: " << sEmployee.getName() << ", ID: " << sEmployee.getEmployeeID() << ", Pay: $" << sEmployee.calculatePay() << endl;

    return 0;
};