// using unique pointers with vectors
//create a vector of 4 unique pointers from 40 - 70;

#include <iostream>
using namespace std;
#include <memory>
#include <vector>

int main (){


  vector<std::unique_ptr<int>> numbers;

  numbers.push_back(make_unique<int>(40));
  numbers.push_back(make_unique<int>(50));
  numbers.push_back(make_unique<int>(60));
  numbers.push_back(make_unique<int>(70));

  for(int x = 0 ; x < 4 ; x++) {

    cout << *numbers[x] <<endl;

  }
  

//   for (int x = 0 ; x < 3 ; x++){
//     cout <<  numbers. << endl;  

//   }

// vector <int> numbers;
// int input;
// for (int x = 0 ; x < 4 ; x++ ) {

// cout << "enter number " << x + 1 <<endl;
// cin >> input ;
// numbers.push_back(input);

// }

// cout << "---My numbers ----"<<endl;

// for (int i : numbers){

//     cout << i << " " ;
// }


    


    return 0;
}

