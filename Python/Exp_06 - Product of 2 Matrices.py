# Python Program to find the product of two matrices.

# Declare and initialize two two-dimensional arrays a and b.
# Calculate the number of rows and columns present in the array a and store it in variables row1 and col1 respectively.
# Calculate the number of rows and columns present in the array b and store it in variables row2 and col2 respectively.
# Check if col1 is equal to row2. For two matrices to be multiplied, the number of column in the first matrix must be equal to the number of rows in the second matrix.
# If col1 is not equal to row2, display the message "Matrices cannot be multiplied."
# If they are equal, loop through the arrays a and b by multiplying elements of the first row of the first matrix with the first column of the second matrix and add all the product of elements.
#   e.g prod11 = a11 x b11 + a11 x b21 + a11 x b31
# Repeat the previous step till all the rows of the first matrix is multiplied with all the columns of the second matrix.
# Display the elements of array prod.

X=[[12,7,3],[4,5,6],[7,8,9]]
Y=[[5,8,1,2],[6,7,3,0],[4,5,9,1]]
result=[[0,0,0,0],[0,0,0,0],[0,0,0,0]]
for i in range(len(X)):
    for j in range(len(Y[0])):
        for k in range(len(Y)):
            result[i][j]+=X[i][k]*Y[k][j]
for r in result:
    print(r)

# Input: 
# A = [[12, 7, 3],
#     [4, 5, 6],
#     [7, 8, 9]]
# B = [[5, 8, 1, 2],
#     [6, 7, 3, 0],
#     [4, 5, 9, 1]]

# Output:
# [114, 160, 60, 27]
# [74, 97, 73, 14]
# [119, 157, 112, 23]