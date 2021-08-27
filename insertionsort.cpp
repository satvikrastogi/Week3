#include<iostream>
using namespace std;
int main(){
  int testcase;
  cout<<"Enter the number of testcases=";
  cin>>testcase;
  for(int t=0;t<testcase;t++){
     int n;
     cout<<"Enter the number of elements=";
     cin>>n;
     int i,j,swapp=0,comp=0,arr[n];
     cout<<"Enter the elements";
     for(int l=0;l<n;l++)
       cin>>arr[l];
     for(i=1;i<n;i++){
        int temp;
        temp=arr[i];
        j=i-1;
        comp++;
        while(j>=0 && arr[j]>temp){
           arr[j+1]=arr[j];
           j--;
           swapp++;
           comp++;
           }
           arr[j+1]=temp;
        }
        cout<<"Sorted Array\n";
        for(int k=0;k<n;k++)
          cout<<arr[k]<<endl;
        cout<<"Swaps="<<swapp<<endl;
        cout<<"comparisions="<<comp<<endl;

        }
        return 0;
        }
