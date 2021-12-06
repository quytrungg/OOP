#include <iostream>
using namespace std;
void mergedarray(int n, int m, int c[200], int a[100], int b[100], int s);
int main()
{
    int a[100],b[100], c[200],m,n;
    cout << "So phan tu mang a: ";
    cin >> m;
    for (int i=0; i<m; i++)
    {
        cout << "Nhap a["<< i << "]";
        cin>> a[i];
    }
    cout << "So phan tu mang b: ";
    cin >> n;
    for (int j=0; j<n; j++)
    {
        cout << "Nhap b["<< j << "]";
        cin>> b[j];
    }
    int s= n+m;
    mergedarray(n,m,c,a,b,s);
    for (int k=0; k<s; k++)
    {
        cout << c[k] << " ";
    }
    return 0;
}
void mergedarray(int n, int m, int c[200], int a[100], int b[100],int s)
{
    int i=0, j=0, k=0;
    while (i<m && j <n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i<m)
    {
        c[k]= a[i];
        i++;
        k++;
    }
    while (j<n)
    {
        c[k]= b[j];
        j++;
        k++;
    }
}