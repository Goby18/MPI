#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void countSort(vector<int>& a, int n, int exp) {
    vector<int> output(n);
    vector<int> count(10, 0);

    for (int i = 0; i < n; i++) {
        count[(a[i]/exp)%10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(a[i]/exp)%10] - 1] = a[i];
        count[(a[i]/exp)%10]--;
    }

    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}
int getMax(vector<int>& a, int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void radixSort(vector<int>& a, int n) {
    int m = getMax(a, n);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(a, n, exp);
}
int main()
{
    int n=1000000;
    ifstream f("descrescator.txt");
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        f >> a[i];
    radixSort(a, n);
    //for (int i = 0; i < n; i++)
      //  cout << a[i] << " ";
}

