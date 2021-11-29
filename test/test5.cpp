#include <iostream>

using namespace std;

int main()
{
    double x, S = 1, pow = 1, div = 1;
    int n;
    cin >> x >> n;
    for(int i = 1; i <= n; i++){
        pow = 1;
        div = 1;
        for(int j = 1; j <= 2*i; j++){
            pow *= x;
            div *= j;
        }
        S += pow/div;
    }
    cout << S;
    return 0;
}