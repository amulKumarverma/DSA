#include <iostream>
using namespace std;
int main(){
int sidelen;
cout<<"print the right angled triangle in number \n";

cout<<"enter the side length:- ";
cin>>sidelen;

for(int i=1;i<=sidelen; i++){
char pattern='a'+(i-1);
  for(int j=1;j<=i; j++){
     
      
  cout<<" "<<pattern<<" ";
}
cout<<endl;
}

  return 0;
}