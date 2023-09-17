#!/usr/bin/python3

#****************************************************************************

#write a python program to count the number 4 in a given list 

#idea: use built-in functions to automate the logic 

#****************************************************************************

def count_fours(ls):
	return ls.count(4)

ls = [1,4,6,7,4]

print("number of 4's in list: ",count_fours(ls))