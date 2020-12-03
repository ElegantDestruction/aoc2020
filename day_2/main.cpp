#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main() {

	string input_file = "input.txt";

	fstream file_handler;
	file_handler.open(input_file, ios::in);
	
	if (file_handler.is_open()) {

		//Read file into vector
		vector<string> input_vector;
		string current_string;
		while (getline(file_handler, current_string)) {
			input_vector.push_back(current_string);
		}

		for (int i = 0; i < input_vector.size() - 1; i++){
			//DEBUG
			cout << "i = " << i << endl;
			int i_value = stoi(input_vector[i]);
			for (int k = i + 1; k < input_vector.size() - 1; k++) {
				//DEBUG
				cout << "k = " << k << endl;
				int k_value = stoi(input_vector[k]);
				for (int j = k + 1; j < input_vector.size() - 1; j++) {
					int j_value = stoi(input_vector[j]);

					if (i_value + k_value + j_value  == 2020) {
						cout << "Answer: " << i_value*k_value*j_value << endl;
						return 0;
					}
				}
			}
		}

	}
	else {
		cout << "File open failed. Sorry! :)" << endl;
	}

	file_handler.close();

	return 0;

}
