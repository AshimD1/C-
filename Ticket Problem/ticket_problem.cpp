#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    float money;
   
    int &min = *min_element(ages,ages+5 );

    money = 50 - 0.01*50*min;
    cout<<money;
    
    
    return 0;
}
