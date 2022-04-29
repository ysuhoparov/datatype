
#include <iostream>

typedef unsigned char byte;;


int main() {
    using namespace std;

    char c = 251;
    byte b = -5;

    cout << "byte b = " << (int)b << " char c = " << (int)c << "\t" << sizeof(b) <<"\n";

    short a = 10;
    int i = 20;
    long d = 1000;
    long long e = 100000;

    cout << "short " << sizeof(a) << " int " << sizeof(i) << " long " << sizeof(d) << " llong " << sizeof(e);

    cout << "\nSHRT_MAX = " << SHRT_MAX << "  INT_MAX = " << INT_MAX << "  LLONG_MAX = " << LLONG_MAX;

    float x = 2.0;
    double z = 3234234.32432;

    cout << "\n\nfloat " << sizeof(x) << " double " << sizeof(z);

    cout << "\nfloat_MAX = " << FLT_MAX << "  double_MAX = " << DBL_MAX;
    cout << "\nfloat_MIN = " << FLT_MIN << "  double_MIN = " << DBL_MIN;

    cout << "\n\n";

    int arr[10] = {2,3,4,5,6,7,8,9,0,1};

    int* parr = arr;

    cout << *(parr+3) << "\n";

    int& refarr = arr[7];

    cout << refarr + 10 << "\n";


    int m2arr[3][4];

    int* p2arr = m2arr[0];

    //for


}

