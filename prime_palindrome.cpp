#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    if(n<2) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
    return true;
}


bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    int i=1;
    int digits=0;
    int b=n;
    while(n>=i){
        i=i*10;
        digits+=1;
    }
    int reverse=0;
    int a=10;
    while(digits>0){
        int number=n%a;
        n=n/10;
        reverse += number*pow(10,(digits-1));
        digits=digits-1;
    }
    if(b==reverse) return true;
    else return false;

}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
    if(isPrime(n)==true && isPalindrome(n)==true) return true;
    else return false;

}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
