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

		//Look for trees
		int current_col = 0;
		char test_char{35};
		
		for (int i = 0; i < input_vector.size() - 1; i++){
			if(input_vector[i][current_col % input_vector[i].length()] == test_char) {
				tree_total++;
				current_col = current_col + 3;
			}
			else {
				current_col = current_col + 3;
			}
		}
	}
	else {
		cout << "File open failed. Sorry! :)" << endl;
	}

	//Close File
	file_handler.close();

	//Print the number of trees out
	cout << "Number of trees: " << tree_total << endl;

	return 0;

}
