 #include <iostream>
using namespace std;
class Inventory1
{
public:
    int ino,qty;
    float rate;
    Inventory1 (int ino1, int qty1, float rate1)
    {
        ino = ino1;
        qty = qty1;
        rate = rate1;
    }
    void display()
    {
        cout << "Item No.: " << ino << "\nQuantity: " << qty << "\nRate: " << rate << endl;
    }
    int getno()
    {
        return ino;
    }
    float getamount()
    {
        return qty * rate;
    }
};

class Inventory2
{
    int ino;
    float amount;
public:
    Inventory2 operator = (Inventory1 &i1)
    {
        Inventory2 i2;
        i2.ino = i1.getno();
        i2.amount = i1.getamount();
        return i2;
    }
    void display()
    {
        cout << "Item no.: " << ino << "\nAmount: " << amount << endl;
    }
};
int main()
{
    Inventory1 I1(1,10,5);
    I1.display();
    Inventory2 I2;
    I2 = I2.operator = (I1);
    I2.display();
    cout<<"Name:Sujal Morwani"<<endl;
   cout<<"ID No:22DCS051"<<endl;
    return 0;
}
