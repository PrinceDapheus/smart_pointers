
//create a vector of 4 unique pointers from 50 - 80;

#include <iostream>
using namespace std;
#include <vector>
#include <memory>



int main(){

// create vector
    vector <int> numbers;

//load numbers;

for (int x = 1 ; x < 5 ; x++){

    numbers.push_back((x+4)*10)  ;
}

for (int i : numbers){

    cout << i << " ";
}





    return 0;

}
