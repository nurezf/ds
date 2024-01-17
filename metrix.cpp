#include<iostream>
using namespace std;
int main(){
  int row;
    cout<<"row and column must be odd enter row and column ";
    cin>>row;


    int a[row][row];
    cout<<"enter elements of  the array ";
    for(int i=0; i<row;i++){
        for(int j=0; j<row;j++){
            cout<<"enter element of index "<<i<<"x"<<j;
            cin>>a[i][j];
        }

    }

    int sum[row];
    int i=0,j=0;
    int mid=(row/2)+1;

   while(i<row){

        for(int j=0;j<3;j++){
            if(i==j){
                sum[0]+=a[i][j];  // index 0 for diagonal
            if (i==1&&j==1){
                sum[1]+=a[i][j];  //index 1 for column middle index
                 sum[2]+=a[i][j];  // index 2 for row middle
                  sum[3]+=a[i][j];  // index 3 for reverse diagonal
            }
        }
        else if (j==mid){
            sum[1]+=a[i][j];
        }
        else if (i==mid){
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
