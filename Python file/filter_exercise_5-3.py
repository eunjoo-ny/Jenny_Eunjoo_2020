numbers=list(range(1,10+1))

print("#extract the odd number")
print(list(filter(lambda x:x%2==1,numbers)))
print()
print("#more than 3 and less than 7")
print(list(filter(lambda x:3<=x<7,numbers)))
print()
print("#extract the number which is less than 50 after implementing square")
print(list(filter(lambda x:x*x<50,numbers)))
