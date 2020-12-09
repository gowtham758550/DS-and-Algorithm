from time import time

#Recursion
def recursion(n):
	if n <= 1:
		return n
	return recursion(n - 1) + recursion(n - 2)

#Dynamic programming	
def dynamic(n):
	l = [0, 1]
	if n > 1:
		for i in range(2, n + 1):
			l.append(l[i - 1] + l[i - 2])
	return l[n]

#Space optimization method	
def space_optimized(n):
	a, b = 0, 1
	if n > 1:
		for i in range(2, n + 1):
			c = a + b
			a, b = b, c
	return b

def main():
	while(1):
		print("""
[1] Recursion
[2] Dynamic programming
[3] Space optimization method
[4] Exit""")
		choice = int(input("Enter choice : "))
	
		if choice == 1:
			print("Fibonacci using Recursion")
			n = int(input("Enter n : "))
			start = time()
			fib = recursion(n)
			end = time()
			print(f"{n} fibonacci series is {fib}")
			print("Program run time ",end - start)
		
		elif choice == 2:
			print("Fibonacci using Dynamic programming ")
			n = int(input("Enter n : "))
			start = time()
			fib = dynamic(n)
			end = time()
			print(f"{n} fibonacci series is {fib}")
			print("Program run time ",end - start)
		
		elif choice == 3:
			print("Fibonacci using Space optimization method")
			n = int(input("Enter n : "))
			start = time()
			fib = space_optimized(n)
			end = time()
			print(f"{n} fibonacci series is {fib}")
			print("Program run time ",end - start)
		
		elif choice == 4:
			break
		
		else:
			print("Invalid choice")
			
if __name__ == "__main__":
	main()
