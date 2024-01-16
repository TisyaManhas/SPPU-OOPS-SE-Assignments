#include<bits/stdc++.h>
using namespace std;
class publication 
{
    public:
    string title;
    float price;
    void add()
    {
    cout<<"Enter title of publication:"<<endl;
    cin.ignore();
    getline(cin,title);
    cout<<"Enter price of publication:"<<endl;
    cin>>price;
    }
    void display()
    {

    }
};
class book: public publication
{
    public:
    int page_count;
    book()
    {
        try
        {
            cout<<"Enter page count:";
            cin>>page_count;
            cout<<endl;
            if(page_count<=0)
            throw page_count;
        }
        catch(...)
        {
            cout<<"Invalid page count!!!"<<endl;
            page_count=0;
        }
    }
};
class tape: public publication
{
    public:
    float play_time;
    tape()
    {
        try
        {
            cout<<"Enter paying time:";
            cin>>play_time;
            cout<<endl;
            if(play_time<=0)
            throw play_time;
        }
        catch(...)
        {
            cout<<"Invalid playing time!!!"<<endl;
            play_time=0;
        }
    }
};
int main()
{
publication obj;

}