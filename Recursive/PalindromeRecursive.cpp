#include<iostream>
using namespace std;

bool palindrom(int i, string &name){
   if(i >= name.size() /2)  return true;

   if(name[i] != name[name.size() - i - 1]) return false;
   return palindrom(i+1, name);

}

int main(){
//   string name = "MADsM";
string name;
cout << "enter the string: ";
cin >> name;
  
cout << palindrom(0, name) << endl;
  return 0;
}