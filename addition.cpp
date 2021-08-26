#include <iostream>
using namespace std;
class addition
{
private:
    int a, b;
    int d = 25;

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
    addition()
    {
    }
    addition(int x, int y)
    {
        a = x;
        b = y;
        cout << "Data has been set." << d << endl;
        this->d = x + y;
        cout << "Data set to " << a << " and " << b << " THis : " << this << endl;
    }

    void addDisplay()
    {
        int c;
        c = a + b;
        cout << "Addition of two numbers is: " << c << endl;
    }
    ~addition()
    {
        cout << "Addition distructor" << endl;
    }
};

int main()
{
    addition obj, obj1(10, 20);
    obj.getdata();
    obj.addDisplay();

    // obj1.setData(10, 20);
    obj1.addDisplay();
    return 0;
}
