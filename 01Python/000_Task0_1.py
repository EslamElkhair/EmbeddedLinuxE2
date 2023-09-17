#!/usr/bin/python3

#****************************************************************************

#write a python program to count the number 4 in a given list 

#idea: use Native logic like c,c++,etc...

#****************************************************************************


def count_four(ls):

	cnt = 0
	for flag in ls:
		if flag == 4:
			cnt+=1
	return cnt


ls = [1,4,6,7,4]	

print("number of 4's in list: ",count_four(ls))