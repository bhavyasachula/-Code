# n = int(input("Enter the number: "))

# for i in range(0,n):
#     for j in range(0,n):
#         print("*", end=" ");
#     print()

n = int(input("Enter the number: "))
j=0
for i in range(0,n):
    for k in range(0,n-i-1):
        print("  " , end="")
    for j in range(0, 2 * i + 1):
        print("*", end=" ");
    print()