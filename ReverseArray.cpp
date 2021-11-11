#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int x, i, counter;
	int Array[] = {1,2,3,4,5};
	x = 5;
	int NewArray[x];
	
		counter = 0;
		for (i = x; i > -1; i -= 1){
			NewArray[counter] = Array[i];
			counter += 1;
		}
	cout << '[';
	for (i = 0; i < x + 1; i += 1 ){
			 cout << Array[i] << ",";
	}
	cout << ']' << endl;
	cout << '[';
	for (i = 0; i < x + 1; i += 1 ){
		 cout << NewArray[i] << ",";
	}
	cout << ']' << endl;



}