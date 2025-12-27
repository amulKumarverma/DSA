#include <iostream>
using namespace std;
int main(){
int sidelen;
cout<<"print the square shape in number \n";

cout<<"enter the side length:- ";
cin>>sidelen;

for(int i=1;i<=sidelen; i++){
  for(int j=1;j<=sidelen; j++){
  cout<<" "<<j<<" ";
}
cout<<endl;
}

  return 0;
}