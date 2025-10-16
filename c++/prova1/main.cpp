#include <iostream>




using namespace std;
class Counter{

    private:
        int value;

    public:
        Counter(){
            cout << "istanza dell'oggetto creata!\n";
            value=0;
        
        }
        ~Counter(){cout << "oggetto distrutto!\n";};
        int getValue(){
            return value;
        }
        void increase(int n){
                
            value +=n;

        }
        



};





// using namespace std;
int main(){
    int n;
    Counter c1,c2;
    for(int i=0; i<=100; i++){
        cout << "contatore 1:"<< c1.getValue() << "\n";
        c1.increase(1);
        
        
    }
     
    
    cout << "contatore 2:"<< c2.getValue() << "\n";
    

    return 0;
}