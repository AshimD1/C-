#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int rev;
    int temp = x;
    while(x>0){
        int rem= x%10;
        rev = rev*10 + rem; 
        x= x/10;
            }
    return rev==temp;
    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}