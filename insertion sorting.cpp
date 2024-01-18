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

    for (int i=1;i<n;i++){
            int b;
        int temp=a[i];
        for(int j=i ; j>0&&temp<a[j-1];j--){
            a[j]=a[j-1];
            b=j-1;
        }
        a[b]=temp;

    }

      for (int i = 0; i < n; i++) {
        cout<<endl<< a[i];
    }

}
