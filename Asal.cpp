#include<iostream>
# include <math.h>
using namespace std;
//Furkan KOCA 221030910028
int main () {
int a=0,i,j,sayi,asal=0;
cout<<"Bir sayi giriniz : ";     
cin>>sayi;   
for(i=2;i<=sayi;i++){
for(j=1;j<=i;j++)
{
if(i%j==0)
{
asal=asal+1;
}
}
if(asal==2) {
cout<<i;
cout<<" ";
a++;
}
asal=0;                        
}
cout<<endl;
cout<<"Asal sayi adedi: "<<a;
return 0;
}
