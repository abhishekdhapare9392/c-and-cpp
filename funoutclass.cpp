#include <iostream>
using namespace std;
class employee
{
private:
    char emp_name[20];
    int emp_age;
    double emp_salary;

public:
    getData();
    setData(char emp_name, int emp_age, double emp_salary);
    display();
};

employee::getData()
{
    cout << "Enter the name of the employee: ";
    cin >> emp_name;
    cout << "Enter the age of the employee: ";
    cin >> emp_age;
    cout << "Enter the salary of the employee: ";
    cin >> emp_salary;
}

employee::setData(char emp_name, int emp_age, double emp_salary)
{
    this->emp_name[20] = emp_name;
    this->emp_age = emp_age;
    this->emp_salary = emp_salary;
}

employee::display()
{
    cout << "=====================================" << endl;
    cout << "Name of the employee: " << emp_name << endl;
    cout << "Age of the employee: " << emp_age << endl;
    cout << "Salary of the employee: " << emp_salary << endl;
}

int main()
{
    employee e;
    e.getData();
    e.display();
    return 0;
}
