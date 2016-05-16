

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    unsigned long n,a,b;//a-4代表需要的最少桃子数，b+n-4代表老猴子最少能得到的桃子熟
    while(cin>>n){
        if(n==0)
            break;
        a=(unsigned long)pow(5,n);
        b=(unsigned long)pow(4,n);
        cout<<a-4<<" "<<b+n-4<<endl;
    }
    return 0;
}