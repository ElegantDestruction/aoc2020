#pragma once

//This is header file for function to count trees
#include<string>
#include<iostream>
#include<vector>
#include<fstream>

class tree_finder {
    private:
        std::vector<std::string> tree_map;
    public:
        tree_finder(std::vector<std::string> tree_map);
        int count_trees(int row_offset, int col_offset, char test_char);

};
