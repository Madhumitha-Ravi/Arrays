#include <iostream>
using namespace std;
int main() {
  int Array1[] ={1,2,3,4,31,32};
  int Array2[] = {4,6,30,34};
  int nSizeofArray1 =0,nSizeofArray2 =0,nSizeofSortedArray =0;
  nSizeofArray1 = sizeof(Array1)/sizeof(Array1[0]);
  nSizeofArray2 = sizeof(Array2)/sizeof(Array2[0]);
  nSizeofSortedArray =nSizeofArray1+nSizeofArray2;
  int Sorted[nSizeofSortedArray];
  int i=0,k=0,j=0;
 for(i=0,j=0;(i<nSizeofArray1 && j< nSizeofArray2);)
 {
   if(Array1[i] < Array2[j])
   {
     Sorted[k] = Array1[i];
     ++i;
     ++k;
   }
   else if(Array1[i] == Array2[j])
   {
     Sorted[k] = Array1[i];
     ++k;
     Sorted[k] = Array2[j];
     ++k;
     ++i;
     ++j;
   }
   else
   {
     Sorted[k] = Array2[j];
     ++j;
     ++k;
   } 

 }
 for(; i <nSizeofArray1;)
 {
     Sorted[k] = Array1[i];
     ++k;
     ++i;
 }
 for(;j < nSizeofArray2;)
 {
     Sorted[k] = Array2[j];
     ++j;
     ++k;
 }
cout<<"Sorted Array : [ ";
 for(int x =0 ;x<nSizeofSortedArray;x++)
 {
     cout<<Sorted[x]<<" , ";
 }
 cout<<" ]";
}
