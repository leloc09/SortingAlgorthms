#include "utils.h"
#include "algorithm.h"
#include "generator.h" 


// Testting mode
// selection-sort
// quick-sort
// insertion-sort
// bubble-sort
// heap-sort
// merge-sort
// radix-sort

int main(int argc, char* argv[]){
	if (argc == 5 || argc == 6) {
		// Run command line if multiple argument passed
		commandLine(argc, argv);
	}
	else {
		// Run testing case
		cout << "TESTING MODE\n";
		cout << "Enter name of algorithm(Ex: selection-sort): ";
		string name; cin >> name;
		cout << "Enter number of testcase(Ex: 5): ";
		int testcase = 0; cin >> testcase;
		testAlgorithm(name, 5);
		cout << "Output of test: test_" << name << ".csv";
	}
	return 0;
}


