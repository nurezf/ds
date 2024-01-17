#include<iostream>
using namespace std;
int main(){
int a[3][3]={{2,3,1},{4,6,3},{3,2,5}};
int sum[4];
int i=0,j=0;
while(i<3){

     for(int j=0;j<3;j++){
        if(i==j){
            sum[0]+=a[i][j];
            if (i==1&&j==1){
                sum[1]+=a[i][j];
                 sum[2]+=a[i][j];
                  sum[3]+=a[i][j];
            }
        }
        else if (j==1){
            sum[1]+=a[i][j];
        }
        else if (i==1){
            sum[2]+=a[i][j];
        }
        else if (i==0||i==2){
            sum[3]+=a[i][j];
        }

    }
    i++;
}
cout<<sum[0]<<endl<<sum[1]<<endl<<sum[2]<<endl<<sum[3];
}
