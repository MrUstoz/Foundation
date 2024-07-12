#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 1000; i++)
    {
        if(i % 2 == 0)
        {
            cout << "output: " << i << " juft son" << endl;
        }
        else
        {
            cout << "output: " << i << " toq son" << endl;
        }
    }
    return 0;
}
