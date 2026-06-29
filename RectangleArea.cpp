#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    void setData(int l, int w)
    {
        length = l;
        width = w;
    }

    int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;

    int l, w;
    cout << "Enter Length and Width: " << endl;
    cin >> l >> w;

    r.setData(l, w);

    cout << "Area = " << r.area() << endl;

    return 0;
}