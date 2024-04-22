#include <iosteam>
using namespace std;


    int main(){
        int* pPointer = nullptr;
        int intergarVar = 5;
        pPointer = intergarVar;
        cout  << "intergarVar: "<<intergarVar<<endl;
        cout << "address of intergarVa: "<< &intergarVar<< endl;
        cout << "pPointer "<<pPointer<< endl;
        cout << "address of pPointer: "<<&pPointer<<endl;

        return 0;
    }