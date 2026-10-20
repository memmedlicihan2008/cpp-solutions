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
    int max=0;
    int counter=0;
    while (n!=0){
        int remainder=n%10;
        if (max<remainder){
            max=remainder;
            counter=0;
        }
        else if (max==remainder){
            counter++;
        }
        n/=10;
    }
    cout<<counter+1;
    
}
