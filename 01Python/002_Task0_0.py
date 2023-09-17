#!/usr/bin/python3

#****************************************************************************

# python Script to access enviroment Variables 

#****************************************************************************


import os 

#print(os.environ['PATH'])


#get the value of the PATH environment variable 
path = os.environ['PATH']
print(path)

# set a new environment variable 
os.environ['MY_VAR'] = 'my value'

#get the value of the new environment variable 
my_var = os.environ['MY_VAR']
print(my_var)