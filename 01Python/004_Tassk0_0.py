#!/usr/bin/python3

#****************************************************************************

# python Script to print the Calender of a given month and year 

#****************************************************************************


import calendar as c

def print_calender(month, year):
	cal = c.month(year,month)
	print(cal)


month = 8
year  = 2023

print_calender(month,year)