# https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
#!/usr/bin/python3

n = 6
arr = [900,940, 950, 1100, 1500, 1800]
dep = [910, 1200, 1120, 1130, 1900, 2000]
arr.sort()
dep.sort()
print(arr,"\n",dep)
platform = 1
maxi = 1
i = 1
j = 0
while(i<n and j <n):
	print(f"arrival  {arr[i]},departure   {dep[j]}")
	if arr[i]<=dep[j]:
		platform+=1
		i+=1
	elif arr[i]>dep[j]:
		j+=1
		platform-=1
	if platform>maxi:
		maxi = platform
	# maxi = max(maxi,platform)
print(maxi)