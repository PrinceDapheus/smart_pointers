
// Using unique_pointer with arrays.


#include <iostream>
using namespace std;
#include <memory>


int main(){



unique_ptr <int[]> unPtr1 = make_unique <int[]> (5);

for (int x = 0; x < 5 ; x ++) {
unPtr1[x] = x * 10;
}

for (int i = 0 ; i < 5 ; i ++){

    cout << unPtr1[i] <<endl;
}






    return 0;
}