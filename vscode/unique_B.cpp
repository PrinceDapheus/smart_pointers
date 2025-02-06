// Creat a unique pointer
// run a function 
// transfer ownership
// confirm the tranfer

#include <iostream>
using namespace std;
#include <memory>


class entity{

public:
//Constructor

  entity (string v)
  : spirit(v)
  {
  cout << "entity created : " << spirit <<endl;
  }

//Destructor

  ~entity(){
  cout << "entity destroyed " <<endl;
  }

//Funtion 1
void speak (){

  cout << "I am " << spirit << " the spririt of Knowledge " <<endl;
}

private:

string spirit;

};


int main(){

//create pointer that manages an obj;
  unique_ptr <entity> unPtr1 = make_unique <entity> ("sophia");

  unPtr1 -> speak();

//transfer ownership
  unique_ptr <entity> unPtr2 = std::move(unPtr1);

// confirm transfer
  if (!unPtr1){
    cout << " unPtr1 gave up ownership to unPtr2 " <<endl;
  }

  unPtr2 -> speak();






  return 0;
}