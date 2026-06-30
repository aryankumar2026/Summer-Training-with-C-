#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void calculateArea()
    {
    }
};

class Circle : public Shape
{
public:
    float r;

    void calculateArea()
    {
        cout<<"Enter Radius: ";
        cin>>r;

        cout<<"Area = "<<3.14*r*r<<endl;
    }
};

class Rectangle : public Shape
{
public:
    float l,b;

    void calculateArea()
    {
        cout<<"Enter Length and Breadth: ";
        cin>>l>>b;

        cout<<"Area = "<<l*b<<endl;
    }
};

class Triangle : public Shape
{
public:
    float base,height;

    void calculateArea()
    {
        cout<<"Enter Base and Height: ";
        cin>>base>>height;

        cout<<"Area = "<<0.5*base*height<<endl;
    }
};

int main()
{
    Shape *s;

    Circle c;
    Rectangle r;
    Triangle t;

    s=&c;
    s->calculateArea();

    s=&r;
    s->calculateArea();

    s=&t;
    s->calculateArea();

    return 0;
}