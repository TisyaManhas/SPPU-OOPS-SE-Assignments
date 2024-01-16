#include<bits/stdc++.h>
#include<vector>
using namespace std;
class personal
{
    public:
    string name,dob;
    long tele;
};
void displaying(const personal& x)
{
    cout<<"Name: "<<x.name<<endl;
    cout<<"Date of Birth: "<<x.dob<<endl;
    cout<<"Telephone Number: "<<x.tele<<endl;
    cout<<endl;
}

bool comparebyname(personal x,personal y)
{
    return x.name<y.name;
}

int main()
{
    vector<personal> data;
    int n;
    cout<<"Enter number of people:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        personal obj;
        cout<<"Enter name:";
        cin.get();
        getline(cin,obj.name);
        cout<<endl;

        cout<<"Enter dob:";
        cin.get();
        getline(cin,obj.dob);
        cout<<endl;

        cout<<"Enter telephone number:";
        cin>>obj.tele;
        cout<<endl;

        data.push_back(obj);
    }

    cout<<"Displaying :"<<endl;
    cout<<endl;
    for(auto& x:data)
    {
        displaying(x);
    }
    sort(data.begin(),data.end(),comparebyname);

    cout<<"Displaying sorted data by name: "<<endl;
    cout<<endl;
    for(auto& w: data)
    {
        displaying(w);
        cout<<endl;
    } 

    string s;
    cout<<"Enter name to be searched:"<<endl;
    cin>>s;

    bool found=binary_search(data.begin(),data.end(),personal{s},comparebyname);

    if(found)
    {
        cout<<"Found the key!!!"<<endl;
    }
    else
    {
        cout<<"Key not found!!!"<<endl;
    }
}