# To display powers of the integer 2 using Python anonymous function.

a = 10
b = list(map(lambda x: 2 ** x, range(a)))
for c in range(a): print("2 raised to power", c, "is", b[c])

# Input : The total terms are: 10
# Output : 2 raised to power 0 is 1
#		   2 raised to power 1 is 2
#		   2 raised to power 2 is 4
#		   2 raised to power 3 is 8
#		   2 raised to power 4 is 16
#		   2 raised to power 5 is 32
#		   2 raised to power 6 is 64
#		   2 raised to power 7 is 128
#		   2 raised to power 8 is 256
#		   2 raised to power 9 is 512