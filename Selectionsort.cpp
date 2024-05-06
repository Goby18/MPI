#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void selectionSort(vector<int>& a, int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;
        if (minIndex != i)
        {temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;}
    }
}
int main()
{
    int n=100000 ;
    ifstream f("descrescator.txt");
    //cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        f >> a[i];
    selectionSort(a, n);
   // for (int i = 0; i < n; i++)
       // cout << a[i] << " ";
}

