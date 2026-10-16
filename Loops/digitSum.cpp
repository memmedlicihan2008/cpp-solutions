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
    int sum=0;
    while(n!=0){
        int t=n%10;
        sum+=t;
        n/=10;
    }
    cout<<sum;
}
