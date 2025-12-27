#include <iostream>
using namespace std;
int main(){
int sidelen;
cout<<"print the square shape in number \n";

cout<<"enter the side length:- ";
cin>>sidelen;
 int count=0;
for(int i=1;i<=sidelen; i++){

  for(int j=1;j<=sidelen; j++){
     
      count++;
  cout<<" "<<count<<" ";
}
cout<<endl;
}

  return 0;
}