#include <iostream>
#include <string>

using namespace std;
	int main(){
		string staff[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
		for (int i=0;i<7;i++){
			if (staff[i].compare("B123") == 0 || staff[i].compare("B179") == 0 || staff[i].compare("B177") == 0 )
			cout <<staff[i]<<endl;
		}
	}
