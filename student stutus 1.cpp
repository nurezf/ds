#include<iostream>
using namespace std;
int main() {
    int n; // Number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n]; // Array of size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
int k=0,b=0;
int sum[n];
     for (int i = 0; i < n; i++) {
        sum[i] = 0;
    }
while(b<n){
    while(a[b]!=0 && b<n){
        sum[k]+=a[b];
        b++;
    }
    b++;
    k++;
}
for(int i=0;i<k;i++){  //to out put the result array.
cout<<sum[i]<<endl;
}
}
