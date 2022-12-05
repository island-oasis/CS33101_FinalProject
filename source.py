# example of passing by object in python
def greet(firstName, lastName):
    print(f'Hi {firstName} {lastName}. Welcome home!')

# example of recursion
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)
    
print('Example of parameter passing by object:')
greet('Colin', 'Duffy')
 
print()
print('Example of recursion, implementing the fibonacci sequence:')
n = 9
print('The 9th term in the fibonacci sequence is:' )
print(fibonacci(n))

print()
print('Example of automatic garbage collection:')
# the value 10 is an object, reference count = 1
gc = 10

# reference count = 0 as the object is dereferenced and ultimately dellocated
# this process occurs automatically, no need to delete anything like in C++
gc = 5
print('### See code comments in file ###')



