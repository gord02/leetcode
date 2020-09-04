#include <iostream>
#include <string>
using namespace std;

// could work, on memroy usage
// I was very slow to create this algorithm work on finding better method

void defangIPaddr(string address, string brk, string clbrk)
{
    int size = address.size();
    for (int i = 0; i < size; i++)
    {
        string replace = "[.]";
        if ('.' == address[i])
        {
            address.replace(i, 1, replace);
            size = size + 2;
            i = i + 2;
        }
        cout << i << endl;
    }
    for (char x : address)
    {
        cout << x << flush;
    }
    return;
}

int main()
{
    string brk("[");
    string clbrk("]");
    string address = "1.1.1.1";
    defangIPaddr(address, brk, clbrk);
}