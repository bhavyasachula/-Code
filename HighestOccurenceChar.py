string = input("Enter the string :")

count = {}

for s in string:
   count[s] = count.get(s,0) + 1
   if(count[s]>1):
      print(s,":",count[s])
    
    


