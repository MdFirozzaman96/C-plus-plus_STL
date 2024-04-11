///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string>stk;
    stk.push("Md.Firozzaman");
    stk.push("Rageeb Intesar Polok");
    stk.push("Sakib Al Sajid");
    stk.push("Atik Aziz");
    stk.push("Radwan Ahmed");

    cout<<"Top element of the stack : "<<stk.top()<<endl;

    cout<<"All elements of the stack, after pop it's top element : "<<endl;
    stk.pop();

    while(!stk.empty())
    {
        string name;
        name=stk.top();/// There is no iterator for stack.
        cout<<name<<endl;
        stk.pop();
    }
    cout<<endl;
    return 0;
}
