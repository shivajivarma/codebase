'''
Compute exact value of 1/(2^n) for T cases
'''
def oneBy2PowerN(N):
    b = pow(5,N)
    l = N - len(str(b))
    output = "0."
    for j in range(0, l):
        output = output + "0"
    return output + str(b)

print("Enter number of test cases: ",end="")
T = int(input())

for i in range(0, T):
    print("\nEnter the value of N: ",end="")
    num = int(input())
    print(oneBy2PowerN(num))
	
'''
With Regards,
Shivaji Varma
'''
