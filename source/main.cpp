#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    cout << name << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << name << endl;
    }
    int chance;
    cin >> chance;
    switch (chance)
    {
    case 1:
        cout << "hello world" << endl;
        break;
    case 2:
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << name << endl;
            }
        }
        break;
    case 3:
        cout << "xiaosishushule" << endl;
        break;
    default:
        cout << "haha" << endl;
    }
    
    system("pause");
    return 0;
}