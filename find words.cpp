#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() {
	
    	char vector [10][10];
    	srand (time(NULL));
    	for (int i=0; i<10; i++){
        	for (int j=0; j<10; j++) {
			vector[i][j] = rand() %75;
			cout << "  " << (char)((vector[i][j]%26)+65);
			} cout<<"\n";
    	}
    
    	cout << endl;
    
    	return 0;
}
