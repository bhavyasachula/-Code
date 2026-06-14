# n = int(input("Enter the number: "))

# for i in range(0,n):
#     for j in range(0,n):
#         print("*", end=" ");
#     print()

n = int(input("Enter the number: "))

for i in range(0,n):
    for j in range(0,i-j):
        print("* ", end=" ");
    print()