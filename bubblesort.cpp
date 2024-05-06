#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void bubbleSort(vector<int>& a, int n) {
    bool swap;
    for(int i = 0; i < n-1; i++) {
            swap=false;
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                swap=true;
            }
        }
        if (!swap)
            break;
    }
}
int main()
{
    int n=100000;
    ifstream f("descrescator.txt");
    //cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        f >> a[i];
    bubbleSort(a, n);
    //for (int i = 0; i < n; i++)
        //cout << a[i] << " ";
}
