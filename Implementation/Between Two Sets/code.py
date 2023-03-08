def getTotalX(a, b):
    count = 0
    for i in range(max(a), min(b)+1):
        temp = True
        for j in a:
            if i % j != 0:
                temp = False

        for j in b:
            if j % i != 0:
                temp = False

        if temp:
            count = count + 1
    return count


# test case 1
x1 = [2, 4]
y1 = [16, 32, 96]


# test case 8
x2 = [3, 4]
y2 = [24, 48]

print(getTotalX(x1, y1))
print(getTotalX(x2, y2))
