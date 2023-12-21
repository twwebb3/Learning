/*  Pointer Rewrite
The following function uses reference variables as parameters. Rewrite the function so 
it uses pointers instead of reference variables, and then demonstrate the function in a complete program.
int doSomething (int &x, int &y)
{
int temp = x;
x = Y * 10;
y = temp * 10;
return x + y;
}
*/

#include <iostream>

using namespace std;

int doSomething(int *, int *);

int main()
{
    int x = 5;
    int y = 10;

    cout << doSomething(&x, &y) << endl;

    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
