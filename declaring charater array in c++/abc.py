print("helloworld")

print(1+2)






def fact_number(n):
    if(n==0  or n == 1):
        return 1 
    else:
        return n * fact_number(n-1)


print ("factorial of numner n is ", fact_number(89))