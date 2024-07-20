#include<iostream>
using namespace std;

int sem1(int a[7][4]);
int sem2(int a[7][4]);
int sem3(int a[7][4]);
int sem4(int a[7][4]);

int main(){
    int A[7][4],t1,t2,t3,t4;
    cout<<"---VENTAS DEL MES---"<<endl;
    cout<<"------SEMANA 1------"<<endl;
    t1=sem1(A);
    cout<<"--> "<<t1<<endl;
    cout<<"------SEMANA 2------"<<endl;
    t2=sem2(A);
    cout<<"--> "<<t2<<endl;
    cout<<"------SEMANA 3------"<<endl;
    t3=sem3(A);
    cout<<"--> "<<t3<<endl;
    cout<<"------SEMANA 4------"<<endl;
    t4=sem4(A);
    cout<<"--> "<<t4<<endl;
    return 0;
}
int sem1(int a[7][4]){
    int s1=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            if(j==0){
                cin>>a[i][j];
                s1=s1+a[i][j];
            }
        }
    }
    return s1;
}
int sem2(int a[7][4]){
    int s2=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            if(j==1){
                cin>>a[i][j];
                s2=s2+a[i][j];
            }
        }
    }
    return s2;
}
int sem3(int a[7][4]){
    int s3=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            if(j==2){
                cin>>a[i][j];
                s3=s3+a[i][j];
            }
        }
    }
    return s3;
}
int sem4(int a[7][4]){
    int s4=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            if(j==3){
                cin>>a[i][j];
                s4=s4+a[i][j];
            }
        }
    }
    return s4;
}