#include<bits/stdc++.h>  //headerfile to include the all header files
using namespace std; // namespace including all functionalities
namespace tanu // self created namespace
{
    double val=45.0;
    int getvalu()
    {
        int val= 89;
        return val;

    }
}
struct node
{
    string str;
    char x;
    int y;
    float foa;
    double doub;
    node(string s,char ch,int x1,float f,double d)
    {
        str=s;
        x=ch;
        y=x1;
        foa=f;
        doub=d;
        cout<<str<<" "<<x<<" "<<y<<" "<<foa<<" "<<doub<<" "<<endl;
    }
};
int main()
{
    double val=20.0;
    int c=30;
    cout<<"th val value is "<<val<<endl;
    cout<<"th val value is "<<tanu::val<<endl;
    cout<<tanu::getvalu()<<endl;// calling function inside tanu namespace
    //node raj=node("striver",' ',13,40.0f,34.0); 1st method to call constructor of type structure
    node*raj=new node("striver",' ',13,40.0f,34.0);// calling constructor of structure by creating instance of it
    

}

