def reverse(start,end,arr):

	#No of iterations needed for reversing the list
	no_of_reverse=end-start+1

	#By incrementing count value swapping of first and last elements is done.
	count=0
	while((no_of_reverse)//2!=count):
		arr[start+count],arr[end-count]=arr[end-count],arr[start+count]
		count+=1
	return arr

#Function takes array, length of array and no of rotations as input
def left_rotate_array(arr,size,d):

	#Reverse the Entire List
	start=0
	end=size-1
	arr=reverse(start,end,arr)
	
	#Divide array into twosub-array based on no of rotations.
	#Divide First sub-array
	#Reverse the First sub-array
	start=0
	end=size-d-1
	arr=reverse(start,end,arr)
	
	#Divide Second sub-array
	#Reverse the Second sub-array
	start=size-d
	end=size-1
	arr=reverse(start,end,arr)
	return arr

beads = ['g', 'g', 'g', 'g', 'b', 'b', 'r']
seq_arr = []

def unique(raw):
	ulist = []
	for r in raw:
		if r not in ulist:
			ulist.append(r)
	return ulist

def permute(a, l, r):
	if l == r:
		seq_arr.append(''.join(a))
	else:
		for i in range(l, r):
			a[l], a[i] = a[i], a[l]
			permute(a, l+1, r)
			a[l], a[i] = a[i], a[l] # backtrack

def getSeq(arr):
	arrs = []
	for a in range(len(arr)-1):
		arrs.append(''.join(left_rotate_array(arr, len(arr), 1)))
	return arrs

def checkSeq(raw):
	arrs = []
	for arr1 in getSeq(list(raw[0])):
		arrs.append(arr1)
	for a in raw[0:]:
		if a in arrs:
			raw.remove(a)
		else:
			for arr2 in getSeq(list(a)):
				arrs.append(arr2)
	return raw

permute(beads, 0, len(beads))
print('Perms Count: ' + str(len(seq_arr)))
u_arr = unique(seq_arr)
print('Combinations Count: ' + str(len(u_arr)))
f_arr = checkSeq(u_arr)
print('Unique Seqs Count: ' + str(len(f_arr)))
print(f_arr)