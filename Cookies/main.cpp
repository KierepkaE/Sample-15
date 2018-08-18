
#include <iostream>

using namespace std;

int friends, cookies;

int main()
{
    cout << "How many friends are coming? ";
    cin >> friends;
    
    cout << "How many cookies do you have? ";
    
    cin >> cookies;
    
    int x = cookies / (friends - 1);
    
    cout << "Cookies for each friend:" << x ;
    
    int y = cookies - x * (friends - 1);
    cout << "Cookies for me:  " << y;
    
    return 0;
}

