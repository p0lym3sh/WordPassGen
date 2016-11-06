#include <iostream>
#include <random>    // used for random_device
#include <algorithm> // Used for Mersenne Twister rng engine "mt19937"
#include <fstream>
#include <iterator>

using namespace std;

int main(int argc, char* argv[]) {
	
	// Makes sure the program 
	// doesn't segfault
	if(argc < 3) {
		cout << argv[0] << " Usage: " 
			 << "<dict file> " 
			 << "<# of words>" 
			 << endl;
		return 0;
	}
	
	// get whole words from file via
	// command line argument
	string filename(argv[1]);
	
	// Import said words into a
	// string vector
	ifstream file(filename);
	istream_iterator<string> start(file), end;		
	vector<string> words(start, end);	
	
	// Generate random number
	random_device rd;
	mt19937 mt(rd());
	
	int numarg = atoi(argv[2]);
	

	for(int c; c < numarg; ++c){
		cout << words[mt() % words.size()]
		     << " ";
	}
	
	cout << endl;
		
	return 0;
}
