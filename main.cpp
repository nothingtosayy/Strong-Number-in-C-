#include<iostream>
using namespace std;
int StrongNumber(int x){
    int sum=0, rem;
    while(x!=0){
        int fact = 1;
        rem = x%10;
        for(int i=1; i<=rem; ++i){
            fact = fact*i;
        }
        sum = sum + fact;
        x = x/10;
    }
    return sum;
}
int main(){
    int Number, res;
    cout<<"Enter a number : ";
    cin>>Number;
    res = StrongNumber(Number);
    if (res == Number){
        cout<<Number<<" is a Strong Number"<<endl;
    }
    else{
        cout<<Number<<" is not an Strong Number"<<endl;
    }
}
