#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;

class StudData;

class Student
{
    public:
    string name;
    int roll;
    string clas,dob;
    char* div;
    char* bg;
    static int count;

    Student()
    {
        name="";
        clas="";
        div=new char;
        bg=new char[4];
        dob="dd/mm/yyyy";
        roll=0;
    }

    static int getcount()
    {
        return count;
    }

    ~Student()
    {
        delete div;
        delete[] bg;
    }
    void getdata(StudData*);
    void display(StudData*);
};

class StudData
{
    
    string address;
    long* tele;
    long* driv;
    friend class Student;

    StudData()
    {
        address="";
        tele=new long;
        driv=new long;
    }

    ~StudData()
    {
        delete driv;
    }

    void getStudData()
    {
        cout<<"Enter address:";
        cin.get();
        getline(cin,address);
        cout<<endl;
        cout<<"Enter telephone number:";
        cin>>*tele;
        cout<<endl;
        cout<<"Enter driving license number:";
        cin>>*driv;
        cout<<endl;
    }

    void displayStudData()
    {
        cout<<"Address: "<<address<<endl;
        cout<<"Telephone Number: "<<*tele<<endl;
        cout<<"Drving License Number: "<<*driv<<endl;
    }
};

inline void Student::getdata(StudData *st)
{
    cout<<"Enter name:";
    cin.get();
    getline(cin,name);
    cout<<endl;
    cout<<"Enter class";
    cin.get();
    getline(cin,clas);
    cout<<endl;
    cout<<"Enter division: ";
    cin>>div;
    cout<<endl;
    cout<<"Enter Date of Birth : ";
    cin.get();
    getline(cin,dob);
    cout<<"Enter Blood Group : ";
    cin>>bg;
    st->getStudData();
    count++;
}

inline void Student::display(StudData* st1)
{
    cout<<"Student Name : "<<name<<endl;
    cout<<"Roll Number : "<<roll<<endl;
    cout<<"Class : "<<clas<<endl;
    cout<<"Division : "<<div<<endl;
    cout<<"Date of Birth : "<<dob<<endl;
    cout<<"Blood Group : "<<bg<<endl;
    st1->displayStudData();
}

int Student::count;
int main()
{
    Student* obj[100];
    StudData* obj2[100];
    int n=0;
    char ch;
    do
    {
        obj[n]=new Student;
        obj2[n]=new StudData;
        obj[n]->getdata(obj2[n]);
        n++;
        cout<<"Do you want to add another student (y/n) : ";
        cin>>ch;
    }while(ch=='y' or ch=='Y');

    for(int i=0;i<n;i++)
    {
        cout<<"---------------------------------------------------------------"<<endl;
        obj[i]->display(obj2[i]);
    }

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Total Students : "<<Student::getcount();
    cout<<endl<<"---------------------------------------------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
        delete obj[i];
        delete obj2[i];
    }
    return 0;
}