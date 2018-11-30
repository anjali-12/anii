'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
count=0
n=int(input())
for i in range(1,n+1):
    if(n%i==0):
        count=count+1
    
    
if(count>2):
    print("no")
else:
    print("yes")
    
        