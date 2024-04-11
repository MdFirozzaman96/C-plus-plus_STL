///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    cout<<"~~~ RABBI ZIDNEE ILMAN ~~~"<<endl<<endl;

    bitset<8>bits;
    cout<<"Bitset : "<<bits<<endl;
    bits[0]=1;
    cout<<"Bitset : "<<bits<<endl;
    bits.set();
    cout<<"Bitset : "<<bits<<endl;
    bits.reset();
    cout<<"Bitset : "<<bits<<endl;
    bits.set(1);
    cout<<"Bitset : "<<bits<<endl;
    bits.set(0);
    cout<<"Bitset : "<<bits<<endl;

    int left;
    cout<<"Inter the shifting value for left shift : ";
    cin>>left;
    bits<<=left;
    cout<<"The bitset after shifting in "<<left<<" indexes left : "<<bits<<endl;

    int right;
    cout<<"Inter the shifting value for right shift : ";
    cin>>right;
    bits>>=right;
    cout<<"The bitset after shifting in "<<right<<" index right : "<<bits<<endl;

    bits.flip(0);
    cout<<"Bitset : "<<bits<<endl;
    cout<<"Bitset : "<<bits<<endl;
    cout<<"Number of One's : "<<bits.count()<<endl;
    cout<<"Number of Zeros : "<<bits.size()-bits.count()<<endl;
    if(bits.any())/// The Bitset contain at least 1.
    {
        cout<<"True -->> At least one true value has in bitset : "<<bits<<endl;
    }
    else
    {
        cout<<"False -->> There is no true value in the bitset : "<<bits<<endl;
    }
    bits.flip();
    cout<<"Bitset after flipping it's all values : "<<bits<<endl;
    bits.reset(1);
    cout<<"The bitset after reset it's bool value at index 1 : "<<bits<<endl;
    if(bits.none())
    {
        cout<<"True -->> All values are false in the bitset : "<<bits<<endl;
    }
    else
    {
        cout<<"False -->> All values are not false in the bitset : "<<bits<<endl;
    }

    bitset<50>bstr(string("1100110011"));

    cout<<"Size of the bitset : "<<bstr.size()<<endl;

    cout<<"Bitset : "<<bstr<<endl;

    cout<<"Bitset after flipping it's all values : "<<bstr.flip()<<endl;

    return 0;
}
