#!/usr/bin/python

#Open File
input_file = open("input.txt",'r')

#Read lines in
full_input = input_file.readlines()

#Instantiate count
passwd_count = 0

# Search
for current_line in full_input:
    #1 strip on colon
    full_string = current_line.split(' ')
    #2 strip on space
    passwd_info_full = full_string[0].split(' ')
    #3 strip on hypen
    passwd_length = passwd_info_full[0].split('-')
    #5 search password for end of #2 strip
    startIndex = 0
    occurrance_count = 0
    for i in range(len(full_string[1])):
        k = full_string[1].find('test', startIndex)
        if(k != -1):
            startIndex = k+1
            occurrance_count += 1
            k = 0

    
    #6 if password occurred between numbers of 3rd strip, increment count
    if occurrance_count >= int(passwd_length[0]) and occurrance_count <= int(passwd_length[1]):
        passwd_count += 1

print('Right passwords:' + str(passwd_count))

input_file.close()