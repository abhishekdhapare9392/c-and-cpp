#include <iostream>
using namespace std;
class arithmeticClass
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void addition()
    {
        int c;
        c = a + b;
        cout << "Addition of two numbers is: " << c << endl;
    }
};

int main()
{
    arithmeticClass obj, obj1;
    obj.getdata();
    obj.addition();

    obj1.setData(10, 20);
    obj1.addition();
    return 0;
}
