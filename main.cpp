#include <iostream>
#include "LinkedList.h"
using namespace std;
int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k-1) % n + 1;
}
int main() {
    LinkedList l;
    int v[101];
    int x;
    int c=1;
    cin>>x;
    l.append(x);
    v[0]=x;
    l.remove(1);
    if(x<0)
        cout<<"Empty list";
    else{
        while(x>=0)
        {
            cin>>x;
            if(x<0)
                break;
            l.append(x);
            v[c++]=x;

        }
        l.printAll();
        cout<<endl<<"n="<<c<<endl;
        if(c==1)
            cout<<"The last surviving node is: "<<v[0];
        else
        {
            cout<<"k=";
            int k;
            cin>>k;
            cout<<"The last surviving node is: "<<v[josephus(c,k)-1];

        }
    }
    int y;
    cout<<endl<<"Introduce a value: ";cin>>y;
    if(l.third(y)>0)
        cout<<"Third element after "<<y<<" is: "<<l.third(y);
    else cout<<y<<" is not in the list";
    return 0;
}

