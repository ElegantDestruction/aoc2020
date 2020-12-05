#include "tree_finder.h"
#include<string>
#include<iostream>
#include<vector>
#include<fstream>

//Constructor
tree_finder::tree_finder(std::vector<std::string> tree_map) {
    this->tree_map = tree_map;
}

int tree_finder::count_trees(int row_offset, int col_offset, char test_char) {
    //Set up variables
    int tree_total = 0;
    int current_col = 0;

    //Look for and count trees
    for (int i = 0; i < tree_map.size() - 1; i = i + row_offset){
        if(tree_map[i][current_col % tree_map[i].length()] == test_char) {
            tree_total++;
            current_col = current_col + col_offset;
        }
        else {
            current_col = current_col + col_offset;
        }
    }

    //Return count
    return tree_total;
}