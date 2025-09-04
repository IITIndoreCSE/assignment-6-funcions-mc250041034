#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    if (arr.size()<2) {
        return -1;
    }
    int a=arr[0];
    for (int i=0; i<arr.size();i++) {
        if (a>arr[i]) {
            a=arr[i];
        }
    }
    int b=a;
    int c=a;
    for (int i=0; i<arr.size(); i++) {

        if (arr[i]>b) {
            c=b;
            b=arr[i];
        }
        if (arr[i]>c && arr[i]<b) {
            c=arr[i];
        }

    }
    if (c==a) {
        return -1;
    }
    return c;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}
