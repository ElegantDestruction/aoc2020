#include "tree_finder.h"
#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main() {

	string input_file = "input.txt";
	int tree_total = 0;

	fstream file_handler;
	file_handler.open(input_file, ios::in);
	
	if (file_handler.is_open()) {

		//Read file into vector
		vector<string> input_vector;
		string current_string;
		while (getline(file_handler, current_string)) {
			input_vector.push_back(current_string);
		}

		//Make tree_finder class
		tree_finder tree_object = tree_finder(input_vector);

		//Look for trees
		char test_char{35};
		int slope_1 = tree_object.count_trees(1,1,test_char); //Slope 1
		int slope_2 = tree_object.count_trees(1,3,test_char); //Slope 2
		int slope_3 = tree_object.count_trees(1,5,test_char); //Slope 3
		int slope_4 = tree_object.count_trees(1,7,test_char); //Slope 4
		int slope_5 = tree_object.count_trees(2,1,test_char); //Slope 5

		//Calculate and print answer
		int answer = slope_1*slope_2*slope_3*slope_4*slope_5;
		cout << "Answer: " << answer << endl;
		
	}
	else {
		cout << "File open failed. Sorry! :)" << endl;
	}

	//Close File
	file_handler.close();

	return 0;

}
