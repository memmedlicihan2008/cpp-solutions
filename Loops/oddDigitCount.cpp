#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int k=0;
    while (n!=0){
        if ((n%10)%2==1){
            k++;
        }
        n/=10;
    }
    cout<<k;
}
