#include<iostream>
using namespace std;
bool check(string v) {
  for (int i=0; i<v.length(); i++)
  if (isdigit(v[i]) == true)
      return true;
      return false;
}
int main() {
  string v;
  cout<<"Please enter some value: ";
  cin>>v;
  if(check(v))
      cout<<"The value "<<v<<" is Integer"<<endl;
  else
      cout<<"The value "<<v<<" is Not Integer"<<endl;
   }