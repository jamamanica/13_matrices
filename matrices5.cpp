#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Cantidad de partidos: ";cin>>n;
    cout<<"Numero de ciudades: ";cin>>m;
    int A[n][m],N[n],F[n];
    int C[m]={-1};
    for(int i=0;i<n;i++){
        cout<<"------PARTIDO "<<i+1<<"------"<<endl;
        int s=0;
        for(int j=0;j<m;j++){
            cout<<"CIUDAD "<<j+1<<": ";cin>>A[i][j];
            s=s+A[i][j];
            if(A[i][j]>C[j]){
                C[j]=A[i][j];
                F[j]=i+1;
            }
        }
        N[i]=s;
    }
    int g=-1;
    int p=0;
    for(int i=0;i<n;i++){
        if(N[i]>g){
            g=N[i];
            p=i;
        }
    }
    cout<<"------------------------------"<<endl;
    cout<<"---GANADOR A NIVEL NACIONAL---"<<endl;
    cout<<"--> Partido "<<p+1<<" ("<<g<<" votos)"<<endl;
    cout<<"------------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<"GANADOR - CIUDAD "<<i+1<<endl;
        cout<<"--> Partido "<<F[i]<<" ("<<C[i]<<" votos)"<<endl;
        cout<<"------------------------------"<<endl;
    }
    int max=-1;
    int r=0;
    for(int j=0;j<m;j++){
        if(A[p][j]>max){
            max=A[p][j];
            r=j;
        }
    }
    cout<<"Mayor votacion del ganador "<<"(Partido "<<p+1<<")"<<endl;
    cout<<"--> Ciudad "<<r+1<<" ("<<max<<" votos)"<<endl;
    cout<<"------------------------------"<<endl;
    return 0;
}