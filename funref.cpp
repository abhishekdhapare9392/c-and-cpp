#include <iostream>
using namespace std;
struct emp
{
    char name[20];
    int age;
    float sal;
};

emp e1 = {"John", 25, 5000.00};
emp e2 = {"Mary", 30, 6000.00};

int main()
{
    emp &fun();
    fun() = e2;
    cout << e1.name << endl
         << e1.age << endl
         << e1.sal << endl;
    return 0;
}

emp &fun()
{
    cout << endl
         << e1.name << endl
         << e1.age << endl
         << e1.sal << endl;
    return e1;
}