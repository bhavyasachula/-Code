# string = input("Enter the string :")

count = {}

# for s in string:
#    count[s] = count.get(s,0) + 1
   
# print(count)
a = "bhavya"
for i in a:
    count[i] = count.get(i,0) + 1
   
for k in count:
    if count[k] > 1:
      print(k)
   

