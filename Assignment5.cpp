/* Write a function template selection sort. Write a program that 
inputs, sorts and outputs an int array and a float array.*/

#include<bits/stdc++.h>
using namespace std;

template<typename T>

void selection_sort(T a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[mini])
            mini=j;
        }
        swap(a[mini],a[i]);
    }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int c;
    cout<<"-----------MENU-------------"<<endl;
    cout<<"1. Input Integers for Integer Sorting."<<endl;
    cout<<"2. Input Floating Numbers for Float Sorting."<<endl;
    cout<<"3. Input Characters for Character Sorting."<<endl;
    cin>>c;

    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    float b[n];
    char d[n];
    switch(c)
    {
        case 1:
        for(int i=0;i<n;i++)
        {
            cout<<"Enter integer "<<i+1<<endl;
            cin>>a[i];
        }
        selection_sort(a,n); 
        break;

        case 2:
        for(int i=0;i<n;i++)
        {
            cout<<"Enter floating numbers "<<i+1<<endl;
            cin>>b[i];
        }
        selection_sort(b,n); 
        break;

        case 3:
        for(int i=0;i<n;i++)
        {
            cout<<"Enter character "<<i+1<<endl;
            cin>>d[i];
        }
        selection_sort(d,n); 
        break;

        default:
        break;
    }
}