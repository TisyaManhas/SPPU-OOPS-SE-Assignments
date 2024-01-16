/*
Write C++ Program using STL for sorting and searching user defined
records such as item records using vector container.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Item{
    public:
    int code;
    double cost;
    int quantity;
    string name;
};
// Function to compare two items by their code
bool comparebycode(const Item& x,const Item& y)
{
    return x.code<y.code;
}

void display(const Item& w)
{
    cout<<"Item Code: "<<w.code<<endl;
    cout<<"Item name: "<<w.name<<endl;
    cout<<"Item cost: "<<w.cost<<endl;
    cout<<"Item quantity: "<<w.quantity<<endl;
}

int main()
{
    vector<Item> items;
    cout<<"Enter number of items:";
    int n;
    cin>>n;
    cout<<endl;


    for(int i=0;i<n;i++)
    {
        Item obj;
        cout<<"Enter details for item:"<<i+1 <<endl;
        cout<<"Enter code:";
        cin>>obj.code;
        cout<<"Enter name:";
        cin.ignore();               //clears input buffers
        getline(cin,obj.name);
        cout<<"Enter cost:";
        cin>>obj.cost;
        cout<<"Enter quantity:";
        cin>>obj.quantity;    

        cout<<endl;
        items.push_back(obj);
    }

    // Sorting the items by code using STL sort function
    sort(items.begin(),items.end(),comparebycode);

    // Displaying sorted items
    cout<<"Displaying sorted items by code: "<<endl;
    for(auto& w: items)
    {
        display(w);
    }  

     // Searching for an item by code using STL binary_search function
    int code1;
    cout<<"Enter Item to be searched by code: ";
    cin>>code1;
    cout<<endl;

    bool found=binary_search(items.begin(),items.end(),Item{code1}, comparebycode);
    if(found)
    {
       cout<<"Item with code "<<code1<<" found."<<endl;
    }
    else{
       cout<<"Item with code "<<code1<<" not found."<<endl;
    }

    return 0;
}