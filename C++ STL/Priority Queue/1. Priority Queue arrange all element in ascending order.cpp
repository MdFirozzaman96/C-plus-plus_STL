///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<string>name;
    priority_queue<long long int>id;

    name.push("Md.Firozzaman");
    id.push(180201130);

    name.push("Ratul Roy");
    id.push(180201131);

    name.push("Noushin Tabassum");
    id.push(180201133);

    name.push("Ahsun Ullah");
    id.push(180201134);

    while(!id.empty())
    {
        string n;
        int i;

        n=name.top();
        name.pop();

        i=id.top();
        id.pop();

        cout<<endl;
        cout<<"Name : "<<n<<endl;
        cout<<"Id : "<<i<<endl;
    }
    cout<<endl;
    return 0;
}
