#!/usr/bin/python

full_count = 0

with open("input.txt") as handle:
    for line in handle:
        temp = line.split()
        rng = temp[0].split('-')
        char = temp[1][0]
        #print(temp)
        word = temp[2]
        low = int(rng[0]) - 1 
        high = int(rng[1]) - 1 
        if word[low] != word[high] and (word[high] == char or word[low] == char):
            full_count = full_count + 1
            #print(line)

print(full_count)