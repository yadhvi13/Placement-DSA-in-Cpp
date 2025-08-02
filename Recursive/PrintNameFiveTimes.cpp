#include<iostream>
using namespace std;

// void printname(int count){
//    if(count == 0) return ;
//    cout << "Yogeeta" << endl;
//    printname(count -1);
// }

// int main(){
//     printname(5);
//     return 0;
// }

void printname(string name, int count){
   if(count == 0){
    cout << "enter valid count";

    return;
   }
   else{
    cout << name << endl;
    printname(name,count-1);
   }
}

int main(){
    string name;
    int count;

    cout << "Enter you name: ";
    cin >> name;

    cout << "How many times you want to print: ";
    cin >> count;

    printname(name,count);
    return 0;
}