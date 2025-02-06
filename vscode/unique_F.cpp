


#include <iostream>
#include <vector>
#include <memory>
using namespace std;



class robot{

   public :

   robot (string n)
   : name (n)
   {

    cout << "robot has spawned : "<< name << endl;

   }

   ~ robot (){

    cout << "robot has distructed!" << endl;
   }

    void attack (){
 
        cout << "Robot attack!" <<endl;

    }


   private :
   string name;

};

int main (){

    unique_ptr <robot> up1  = make_unique<robot> ("Astro");
    
   

// call member function

    up1->attack();


//Tranfer Pointer
    unique_ptr<robot>up2 = std::move(up1);

//Prove the tranfer 
    if (!up1){
        cout << "------"<<endl;
        cout << "up1 is null" <<endl;
    }




    return 0;
}
