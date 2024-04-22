#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	int main(){

		srand(time(NULL));
		int daysUntilExpiration = rand()%12;
	if (daysUntilExpiration <= 10 && daysUntilExpiration > 5)
		cout << "Your subscription will expire soon. Renew now!"<<endl;
	else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1){
		cout << "Your subscription expires in "<<daysUntilExpiration<<endl;
		cout << "Renew now and save 10%!"<<endl;
	}
	else if(daysUntilExpiration == 1) {
		cout << "Your subscription expires within a day!"<<endl;
		cout << "Renew now and save 20%! \n";
	}
	else
		cout << "You have an active subscription"<<endl;
	return 0;
	}