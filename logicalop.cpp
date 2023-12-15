#include<iostream>
using namespace std;

void logicalAND(const int *a, const int *b, const int n, int *c){
   for(int i=0; i < n; i++) {
      if(a[i] * b[i])
        c[i] = 1;
      else 
        c[i] = 0;
   }
   cout << endl; 
} 

void logicalOR(const int *a, const int *b, const int n, int *c){
   for(int i=0; i < n; i++) {
      if(a[i])
        c[i] = 1;
      else if(b[i])
        c[i] = 1;
      else 
        c[i] = 0;
   }
   cout << endl; 
}  

void logicalNOT(const int *arr, const int n, int *c){
   for(int i=0; i < n; i++) {
      if(arr[i])
        c[i] = 0;
      else 
        c[i] = 1;
   }
   cout << endl; 
} 

void display(const int *arr, const int n, string msg){
    cout<< "Displaying array: "<< msg << endl;
    for(int i=0; i < n; i++) {
      cout << arr[i] << " "; 
   }
   cout << endl;
}

int main()
{ 
// void logicalAND(int[], int[], int[]) ;
  int A[] = {1, -2, 0 , 6, 11, 0 ,0 , 4};
  int B[] = {7, -5, 0 , -6, 23, 9 ,0 , 0};
  
  // cout << sizeof(A) << endl; // 4 bytes * 8 = 32
  int len = sizeof(A)/sizeof(A[0]);
  int C[len];
  display(A, len, "A");
  display(B, len, "B");
  logicalAND(A,B,len,C);
  display(C, len, "Logical AND of A,B");
  logicalOR(A,B,len,C);
  display(C, len, "Logical OR of A,B");  
  logicalNOT(B,len,C);
  display(C, len, "Logical NOT of B"); 

 return 0;
}