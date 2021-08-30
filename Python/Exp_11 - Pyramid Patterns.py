#  Python Program to Create Pyramid Patterns.
# Accept the number of rows from the user to form pyramid shape
# Iterate the loop till the number of rows specified by the user:
# Display 1 star in the first row
# Increase the number of stars based on the number of rows.

rows = 5
k = 0
for i in range(1, rows+1):
    for space in range(1, (rows-i)+1):
        print(end="  ")
   
    while k!=(2*i-1):
        print("* ", end="")
        k += 1
    k = 0
    print()

# Input : *
# Output : 
#         *
#       * * *
#     * * * * *
#   * * * * * * *
# * * * * * * * * *
