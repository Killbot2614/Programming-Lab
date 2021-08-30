# Monitoring memory usage of a running Python program

# sing Tracemalloc
# Tracemalloc is a library module that traces every memory blocks in python. The tracing starts by using the start() during runtime. This library module can also give information about the total size, number and average size of allocated memory blocks

import tracemalloc
def app():
    x=[]
    for i in range(0,100000):
        x.append(i)
        
tracemalloc.start()
app()

print(tracemalloc.get_traced_memory())
tracemalloc.stop()

# Output : (0, 3617252)

