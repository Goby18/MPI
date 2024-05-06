#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int nr=0;
    ofstream f("crescator.txt");
    for (int i = 0; i < 1000000; i++) {
        f << i<<" ";
        nr++;
    }
    f<<endl;
    f<<nr;
    return 0;
}

