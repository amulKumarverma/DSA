#include <iostream>
using namespace std;
int main(){
int sidelen;
cout<<"print the inverse right angled triangle\n";

cout<<"enter the side length:- ";
cin>>sidelen;

for(int i=1;i<=sidelen; i++){
  for(int j=sidelen;j>=i; j--){
  cout<<" * ";
}
cout<<endl;
}

  return 0;
}