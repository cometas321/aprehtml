#include<bits/stdc++.h>
using namespace std;

void comprobar_par(int );
int main(){
    int n;
    cin>>n;
    comprobar_par(n);

    return 0;
}
void comprobar_par(int ){
    if(n%2==0){
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero es impar"<<endl;
    }
}