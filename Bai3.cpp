#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

int a[1000];
bool b[1000];
bool can = false;
int n;
int weight;
int s = 0;
void input()
{
    fstream in("Input.txt" ,ios::in);
    in >>n;
    in>>weight;
    for(int i = 1; i <= n; i ++)
    {
        a[i] = pow(3,i-1);
    }
    in.close();
}

void output()
{
    fstream out("Output.txt" , ios::out);
    if(can == false) {
            out<<"NONE";
            return ;
    }
    for(int i = n; i >= 1 ; i --)
    {
        if(b[i]) out<<i<<" ";
    }
    out.close();
}
void quaylui(int k)
{
    for(int j = 0 ; j <= 1; j ++)
    {
        b[k] = j;
        s += a[k] * b[k];
        if(k == n)
        {
            if (s == weight)
            {
                can = true;
                output();
                return ;
            }
        }
        else if(weight >= s) quaylui(k + 1);
        s -= a[k] * b[k];

    }
}

int main()
{
    input();
    quaylui(1);

}
