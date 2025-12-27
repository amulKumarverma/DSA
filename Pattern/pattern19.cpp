#include <iostream>
using namespace std;
int main(){
int sidelen;
cout<<"print the right angled triangle in number \n";

cout<<"enter the side length:- ";
cin>>sidelen;

for(int i=1;i<=sidelen; i++){

  for(int j=1;j<=i; j++){
     int pattern=sidelen-(j-1);
      
  cout<<" "<<pattern<<" ";
}
cout<<endl;
}

  return 0;
}