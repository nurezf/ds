#include<iostream>
using namespace std;
    int n; //to get the size of array
int linearSearching (int myarray[], int key){
    int index=0;
    int a=0; //to check weather the was found
    do{
       if(myarray[index]==key) {
         cout<<"the key is found on index "<<index;
         a++;
         break;
       }
       index++;
    }
    while(index<n);
    if(a==0){
        cout<<"the key is not found.";
    }


}

int binarySearching (int myarray[],int key){
     int left=0;
     int right=n-1;
     int a=0;    //to check weather the was found
     int mid;
     do {
     mid=(right+left)/2;
        if (myarray[mid]==key){

           a=1;
           break;
        }

        else {
            if(myarray[mid]<key){
                left=mid+1;
            }
            else {
                right=mid-1;
            }


        }

         a=-1;
     } while(left<=right);

     if(a==-1){
        cout<<"the key was not found";
     }
       else {
         cout<<"the key is found at index "<<mid;
     }




}


int main () {

    cout<<"enter the size of the array";
    cin>>n;
   int myarray[n];
  cout<<"enter elements of the array";
   for( int i=0 ; i<n ;i++){
    cin>>myarray[i];
   }

   int key;
   cout<<"enter the searched key";
   cin>>key;
  binarySearching(myarray,key);

}
