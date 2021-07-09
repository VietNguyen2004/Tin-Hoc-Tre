#include<iostream>
using namespace std;

int main()
{
    int a[3];
    string b[3];
    int sap = 0;
    int ngua = 0;
    cout<<"Nhap 0 neu sap va 1 neu ngua\n";
    for (int i = 0; i < 3; i++)
    {
        cin>>b[i];
        cin>>a[i];
        if(a[i] == 1) ngua ++;
        else sap ++;
    }
    if(ngua == 0 || sap == 0) cout<<"Khong ai thang";
    else
    {
        int k;
        if(ngua > sap) k = 0;
        else k = 1 ;
        for (int i = 0 ; i < 3; i ++)
        {
            if(a[i] == k){
                cout<<b[i]<<" thang\n";
                break;
            } 

            
        }

    }
