#include<bits/stdc++.h>
using namespace std;

class file_handle
{
    fstream f;
    public:
    void create_file()
    {
        f.open("file_handle.txt",ios::out);
        if(!f)
        {
            cout<<"Error"<<endl;
        }
        else
        {
            cout<<"File created Successfully"<<endl;
        }
        f.close();
    }
    void write_file()
    {
        f.open("file_handle.txt",ios::out);
        string data;
        cout<<"Enter data:"<<endl;
        cin.ignore();
        getline(cin,data);
        f<<data;
        cout<<"Data Entered Successfully"<<endl;
        f.close();
    }

    void read_file()
    {
        cout<<"Reading the file"<<endl;
        f.open("file_handle.txt",ios::in);
        string x;
        while(f>>x)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        f.close();
    }
};
int main()
{
    file_handle obj;
    obj.create_file();
    obj.write_file();
    obj.read_file();
}