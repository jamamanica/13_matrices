#include<iostream>
using namespace std;

void matriz(int m,int a[][100]);
void imprimir(int m,int a[][100]);

int main(){
    int n;
    cout<<"Valor de n: ";cin>>n;
    int A[n][100];
    matriz(n,A);
    imprimir(n,A);
    return 0;
}
void matriz(int m,int a[][100]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m*3;j++){
            if(i==0||j==0||i==m-1||j==m*3-1){
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }
        }
    }
}
void imprimir(int m,int a[][100]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m*3;j++){
            cout<<"["<<i+1<<"]["<<j+1<<"]: "<<a[i][j]<<endl;
        }
    }
}