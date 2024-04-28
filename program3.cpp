#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5>arr={1,2,3, 4,5};
    //printing the element of the array
   /*for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }*/ 
    // printing the element of the array in the reverse order
   for(auto it=arr.rbegin();it!=arr.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //printing the element of the array in the reverse order by the another method
    for(auto it=arr.end()-1;it>=arr.begin();it--)
    {
        cout<<*it<<" ";
    }


}