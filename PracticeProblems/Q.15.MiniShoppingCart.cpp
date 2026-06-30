#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

class Product
{
public:
    string name;
    int price;

    Product(string n,int p)
    {
        name=n;
        price=p;
    }
};

class Customer
{
public:
    string name;

    Customer(string n)
    {
        name=n;
    }
};

class Cart
{
public:
    vector<Product> item;

    void addProduct(Product p)
    {
        item.push_back(p);
    }

    void removeProduct()
    {
        if(item.size()>0)
            item.pop_back();
    }

    void display()
    {
        int i,total=0;

        cout<<"Products"<<endl;

        for(i=0;i<item.size();i++)
        {
            cout<<item[i].name<<" "<<item[i].price<<endl;
            total=total+item[i].price;
        }

        cout<<"Total = "<<total<<endl;

        if(total>=1000)
        {
            total=total-100;
            cout<<"Discount Applied = 100"<<endl;
        }

        cout<<"Final Bill = "<<total<<endl;
    }
};

int main()
{
    map<string,int> product;

    product["Pen"]=20;
    product["Book"]=100;
    product["Bag"]=900;
    product["Bottle"]=150;

    Customer c("Aryan");

    Cart cart;

    cart.addProduct(Product("Pen",20));
    cart.addProduct(Product("Book",100));
    cart.addProduct(Product("Bag",900));

    cart.removeProduct();

    cout<<"Customer : "<<c.name<<endl;

    cart.display();

    return 0;
}