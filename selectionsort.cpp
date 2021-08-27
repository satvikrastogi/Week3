#include<iostream>
using namespace std;
int main(){
    int testcase;
    cout<<"Enter the no. of testcases=";
      cin>>testcase;
      for(int t=0;t<testcase;t++){
  int n;
  cout<<"Enter the limit of array=";
  cin>>n;
  int a[n];
  cout<<"Enter the elements of Array=";
  for(int i=0;i<n;i++)
    cin>>a[i];
    int i,j,min,temp,count=0,comp=0;

   for(i=0;i<n-1;i++){
      min=i;
       for(j=i+1;j<n;j++){
            comp++;
         if(a[j]<a[min])
           min=j;
         }
         if(min!=i){
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
           count++;
           }
        }
        for(int k=0;k<n;k++)
          cout<<a[k]<<endl;
        cout<<"No. of Swapping="<<count<<endl;
        cout<<"No. of comparision="<<comp<<endl;

          }
          return 0;
}

