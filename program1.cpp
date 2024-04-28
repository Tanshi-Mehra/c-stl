#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 array<int,5>arr={4,5,6};//global declaration
int main()
{
   // int arr[100];//normally we create array by this
    //array<int,100>arr;// array created in stl ,100 size array is created of type int
   // array<int,5>arr={4,5,6};
   array<int ,4>arr1;
   arr1.fill(23);//fill all the array with 23
    for(auto x:arr1) //for each loop 
    {
      cout<<x<<endl;
    }
    //to access the element randomly
    cout<<arr.at(0)<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<endl;
    }

}