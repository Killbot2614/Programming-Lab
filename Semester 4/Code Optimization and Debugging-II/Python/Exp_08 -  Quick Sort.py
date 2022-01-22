import sys

def quicksort(x,y,z):
    if y < z:
        l=partition(x,y,z)
        quicksort(x, y, l - 1)
        quicksort(x, l + 1, z)
        
def partition(x, y, z):
    pivot = x[y]
    start = y
    end = z
    while start < end:
          while start <= z and x[start] <= pivot:
               start += 1
          while x[end] > pivot:
              end -= 1
          if start < end:
              x[start], x[end] = x[end], x[start]
    x[y], x[end] = x[end], x[y]
    return end


x = list(map(int,sys.stdin.readline().split()))
quicksort(x, 0, (len(x) - 1))
for i in x:
    print(i,end = " ")
