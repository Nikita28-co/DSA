#include<iostream>
using namespace std;

int partition(int a[],int low,int high){
 int pivot=a[low];
 int i=low-1;
 int j=high;
  while(true){
      while(a[i]<pivot){
       i++;
      }
       while(a[j]>pivot){
        j=j-1;
        }
         if(i>=j){
          return j;
         }
       swap(a[i],a[j]);
   }
}
void Quicksort(int a[],int low,int high){
 if(low<high){
   int j=partition(a,low,high+1);
       Quicksort(a,low,j-1);
       Quicksort(a,j+1,high);
  }
}
void print(int a[],int n){
 int i;
  for(i=0;i<n;i++){
    cout<<a[i]<<endl;
 }
}
int main(){
 int a[]={65,70,75,80,85,0,60,55,50,45};
 int n=9;
 partition(a,0,n-1);
 Quicksort(a,0,n-1);
 print(a,n);
 return 0;
}


