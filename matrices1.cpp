#include<iostream>
using namespace std;

void leer(int m,int a[][100]);

int main(){
    int n;
    cout<<"Orden de matriz cuadrada: ";cin>>n;
    int A[n][100];
    leer(n,A);
    return 0;
}

void leer(int m,int a[][100]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"Valor de ["<<i+1<<"]"<<"["<<j+1<<"]: ";cin>>a[i][j];
        }
    }
}