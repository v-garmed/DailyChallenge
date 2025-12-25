# Receive two numbers 
# Return sum, difference, product 
# Print results

def calculate (a, b):
    summ = a + b
    dif = a-b
    prod = a*b

    return summ, dif, prod

x = float (input("Enter number 1:"))

y= float (input("Enter number 2: "))

summ, dif, prod = calculate (x , y)

print("Sum:", summ)
print("Difference:", dif)
print("Product:", prod)


