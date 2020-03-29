input()
count = [0 for i in range(1001)]
for val in [int(x) for x in input().split()]:
    count[val] += 1
q = int(input())
for i in range(q):
    counted = count[int(input())]
    print("NOT PRESENT" if counted == 0 else counted) 