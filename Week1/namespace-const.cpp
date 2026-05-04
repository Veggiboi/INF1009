#include <iostream>
using namespace std;

void print(const int a[], int iMin, int iMax) {
    cout << "{";
    for (int i = iMin; i <= iMax; ++i) {
        cout << a[i];
        if (i < iMax) cout << ",";
    }
    cout << "}" << endl;
}

int main(int argc, char *argv[])
{
    int arr[5] = {1,2,3,4,5};
    print(arr, 2, 4);
    return 0;
}
