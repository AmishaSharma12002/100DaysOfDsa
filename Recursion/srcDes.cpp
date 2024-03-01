//tail recursion 
#include<iostream>
using namespace std;
void printty(int,int);
int main()
{
    int des, st;
    cin>>st>>des;
    printty(st,des);
    return 0;
}
void printty(int s,int d)
{
    if (s>d) //base == 6 5 
    {
        cout<<"reached"<<endl; //reached 
        return ; //return
    }
    cout<<"Current: "<<s<<endl; // current : 5
    printty(s+1,d); // 
}