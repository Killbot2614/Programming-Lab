# Aim: To create a python program to count the special characters, alphabets, digits, lowercase and uppercase characters

# Algorithm: 
# Step 1: Start
# Step 2: Declare necessary files and variables
# Step 3: Read the input string
# Step 4: Count the no. of special characrters
# Step 5: Print the output
# Step 6: Stop

# Program
def countStuff(str):
    upper_ctr, lower_ctr, number_ctr, special_ctr = 0,0,0,0
    for i in range(len(str)):
        if str[i] >= 'A' and str[i] <= 'Z' : upper_ctr += 1
        elif str[i] >= 'a' and str[i] <= 'z' : lower_ctr += 1
        elif str[i] >= '0' and str[i] <= '9' : number_ctr += 1
        else:
            special_ctr += 1
    return upper_ctr, lower_ctr, number_ctr, special_ctr

str = "@X5Something.whatever"
print("Original Substrings: ", str)
u,l,n,s = countStuff(str)
print("In Uppercase character: ",u)
print("Lowercase characters: ",l)
print("Number case: ", n)
print("Special case character: ", s)

# Output
# Original Substrings:  @X5Something.whatever
# In Uppercase character:  2
# Lowercase characters:  16
# Number case:  1
# Special case character:  2

