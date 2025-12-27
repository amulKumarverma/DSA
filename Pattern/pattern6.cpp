#include <iostream>
using namespace std;
int main(){
int sidelen;
cout<<"print the square shape in number \n";

cout<<"enter the side length:- ";
cin>>sidelen;

for(int i=0;i<sidelen; i++){
  for(int j=0;j<sidelen; j++){
  cout<<" "<<sidelen-j<<" ";
}
cout<<endl;
}

  return 0;
}