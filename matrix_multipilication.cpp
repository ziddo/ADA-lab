#include<iostream>
using namespace std;
int main(){
int matrix1[3][3],matrix2[3][3],matrix3[3][3]={0};
int i,j,k;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>matrix1[i][j];
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>matrix2[i][j];
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        for(k=0;k<3;k++)
            matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++)
        cout<<matrix3[i][j];
        cout<<"\n";


}
}
