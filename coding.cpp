#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows you want: " << endl;
    cin >> n;
    int i = 1;
    cout << endl;

    int n1 = (n + 1) / 2;
    int n2 = n1 - 1;

    if(n%2==1){
    while (i <= n1)
    {
        int space = 1;
        while (space <= n1 - i)
        {
            cout << " ";
            space++;
        }

        int star = 1;
        while (star <= (2 * i) - 1)
        {
            cout << "*";
            star++;
        }

        cout << endl;
        i++;
    }
    int j = 1;

    while(j<=n2)
    {
        int rspace = 1;
        while(rspace <= j)
        {
            cout << ' ';
            rspace++;
        }
        int star = 1;
        int k = n - 2 * j;
        while(star <= k)
        {
            cout << '*';
            star++;
        }
        cout << endl;
        j++;
    }
    }
    else{
        cout << "Enter an ODD number."<< endl;
    }
    return 0;
}