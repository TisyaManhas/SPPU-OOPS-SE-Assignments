#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
    float imag,real;
    public:
    Complex(float i=0,float r=0)
    {
        imag=i;
        real=r;
    }

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }

    Complex operator*(Complex const& obj)
    {
        Complex res;
        res.real=(real*obj.real)-(imag*obj.imag);
        res.imag=(real*obj.imag)+(imag*obj.real);
        return res;
    }

    friend istream &operator>>(istream &in,Complex &obj1)
    {
        in>>obj1.real>>obj1.imag;
        return in;
    }
    friend ostream &operator<<(ostream &o,Complex &obj1)
    {
        o<<obj1.real<<" +i"<<obj1.imag<<endl;
        return o;
    }
};

int main()
{
    Complex c1,c2,c4,c5;
    cout<<"FOR ADDITION:"<<endl;
    cout<<"Enter real and imag numbers of first complex number:"<<endl;
    cin>>c1;
    cout<<"Enter real and imag numbers of second complex number:"<<endl;
    cin>>c2;
    Complex c3=c1+c2;
    cout<<"Sum of Complex Numbers:"<<c3<<endl;

    cout<<"FOR MULTIPLICATION:"<<endl;
    cout<<"Enter real and imag numbers of first complex number:"<<endl;
    cin>>c4;
    cout<<"Enter real and imag numbers of second complex number:"<<endl;
    cin>>c5;
    Complex c6=c4*c5;
    cout<<"Multiplication:"<<c6; 
    return 0;
}