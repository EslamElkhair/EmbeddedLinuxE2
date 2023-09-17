#!/usr/bin/python3

#****************************************************************************

# Test whether a passed letter is a vowel or not 

#****************************************************************************

def is_vowel(letter):
	vowels = ['a','e','i','o','u']
	return letter in vowels


def check_vowels():
	letter = input("Enter a letter: ")
	letter = letter.lower()
	if(is_vowel(letter)):
		print("vowel")
	else:
		print("not vowel")


check_vowels()