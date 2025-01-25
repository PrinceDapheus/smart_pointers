
#include <iostream>
using namespace std;

#include <memory>
#include <utility>


int main(){

//create unique pointer
    unique_ptr <int> unPtr1 = make_unique <int> (100);

    cout << "Unique Pointer : " << *unPtr1 <<endl;

//Tranfer ownership
    unique_ptr <int> unPtr2 = move(unPtr1);

//Print proof of tranfer

cout << "----------------"<<endl;

    if(!unPtr1){

        cout << " Resource has been transfered from Unique Pointer 1 to Unique Pointer 2" <<endl;
       // cout << "unPtr1 :" << *unPtr1 <<endl;
    }
// Print unPtr2
cout << "----------------"<<endl;

    cout << "unPtr2 :" << *unPtr2 <<endl;

    return 0;


}
