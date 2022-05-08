#include <bits/stdc++.h>
using namespace std;

int main() {

    char gfg[] = "A string";
    char *ptr = gfg;

    cout<<gfg[0]<<" "<<*ptr<<" "<<gfg[3]<<endl;

    ptr = ptr + 2;

    cout<<*ptr<<" "<<ptr[2]<<" "<<ptr[5];

    return 0;
}
