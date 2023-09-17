#!/usr/bin/python3

#****************************************************************************

# python Script to Handle a logn system.

#****************************************************************************

login_system = {
	"Ahmed" : "1394",
	"Ali"   : "6078",
	"Amr"   : "9345"
}

user_name = input("Enter username: ")
password  = input("Enter password: ")


if(login_system.get((user_name)) == password):
	print("Welcome")
else:
	print("Failed")