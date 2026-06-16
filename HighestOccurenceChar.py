# count = {}

# a = "bhavya"
# for i in a:
#     count[i] = count.get(i,0) + 1
   
# for k in count:
#     if count[k] > 1:
#       print(k)
   

a = [1,4,5,6,2]
largest = 0
for i in a:
    if(a[i]>largest):
        largest = a[i]

print(largest)