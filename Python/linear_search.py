"""Linear search
Parameters list, x - search element
Function return position if search element present in the list
return -1 if search element is not available
"""
def linear_search(list, x):
	for i in range(len(list)):
		if list[i] == x:
			return i+1
	return -1

def main():
	print("Linear search")
	n = int(input("Enter size of array : "))
	#Method 1 for list elements as input from user
	"""
	list = []
	for i in range(n):
		temp = int(input(f"Enter {i+1} element : "))
		list.append(temp)
	"""
	
	#Method 2 for list elements as input from user(one line code)
	#You can also use python one liner using map function
	list = [int(input(f"Enter {i + 1} element : ")) for i in range(n)]
	
	x = int(input("Enter search element : "))
	linear_search(list, x)
	result = linear_search(list, x)
	print(result)
	
	"""
	Easy way in python using "in" keyword
	if search_element in list: return True
	we can use index() inbuilt function to find the index of an element in list
	"""
			
if __name__ == "__main__":
	main()
