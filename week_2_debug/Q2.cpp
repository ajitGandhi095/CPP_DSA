// Print full pyramid like an Equilateral Triangle

#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cout << "Enter the number of rows : ";
    cin >> k;
    cout << "Enter The number of Cols: ";
    cin>> n;
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout << " ";
        }
    }

for (j=1,k=i-1; j<=2*i-1; j++,k--)
{
if (1 || j <= k)
cout << j;
else
cout << k;
}
cout << endl;

cout << " ";

return 0;
}