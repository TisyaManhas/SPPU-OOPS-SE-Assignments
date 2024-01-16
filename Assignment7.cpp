#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    typedef map<string,long> m;
    m population;
    population.insert(make_pair<string,long>("Himachal Pradesh",2300000));
    population.insert(make_pair<string,long>("Andhra Pradesh",2300000));
    population.insert(make_pair<string,long>("Madhya Pradesh",2300000));
    population.insert(make_pair<string,long>("Maharashtra",2300000));
    population.insert(make_pair<string,long>("Uttar Pradesh",2300000));
    population.insert(make_pair<string,long>("Bihar",2300000));
    population.insert(make_pair<string,long>("Uttrakhand",2300000));
    population.insert(make_pair<string,long>("Meghalaya",2300000));
    population.insert(make_pair<string,long>("Assam ",2300000));
    population.insert(make_pair<string,long>("Manipur",2300000));
    population.insert(make_pair<string,long>("Tamil_Nadu",2300000));
    population.insert(make_pair<string,long>("West Bengal",2300000));
    population.insert(make_pair<string,long>("Kerela",2300000));
    population.insert(make_pair<string,long>("Karnataka",2300000));
    population.insert(make_pair<string,long>("Jammu",2300000));
    population.insert(make_pair<string,long>("Kashmir",2300000));
    population.insert(make_pair<string,long>("Chhattisgarh",2300000));
    population.insert(make_pair<string,long>("Punjab",2300000));
    population.insert(make_pair<string,long>("Mizoram",2300000));
    population.insert(make_pair<string,long>("Rajasthan",2300000));
    population.insert(make_pair<string,long>("Gujarat",2300000));
    population.insert(make_pair<string,long>("Goa",2300000));
    population.insert(make_pair<string,long>("Delhi",2300000));
    population.insert(make_pair<string,long>("Orissa",2300000));
    population.insert(make_pair<string,long>("Jharkhand",2300000));
    population.insert(make_pair<string,long>("Haryana",2300000));
    population.insert(make_pair<string,long>("Tripura",2300000));
    population.insert(make_pair<string,long>("Nagaland",2300000));
    population.insert(make_pair<string,long>("Leh Ladakh",2300000));

    m::iterator it;
    cout<<"========Population of states in India=========="<<endl;
    cout<<"Size of Population Map: "<<population.size()<<endl;
    string statename;
    cout<<"Enter state's name to be found: "<<endl;
    cin>>statename;
    it=population.find(statename);
    if(it!=population.end())
    {
        cout<<"Population of "<<statename<<" is "<<it->second<<endl;;
    }
    else
    {
        cout<<"Key is not in the Map!!!"<<endl;
        population.clear();
    }
}
