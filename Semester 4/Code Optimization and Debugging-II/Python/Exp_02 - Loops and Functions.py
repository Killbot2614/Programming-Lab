# 2.Python program for binary addition?

# Any loops and functions.

def rem(sample):
    result = []
    for num in sample:
        result.append(num) if num not in result else 0
    return result

sample = [25, 40, 25, 50, 30, 20, 25]
print(*rem(sample), sep = " ")

# Input: 25 40 25 50 30 20 25
# Output: 25 40 50 30 20
