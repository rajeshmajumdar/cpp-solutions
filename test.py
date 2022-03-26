max_sum = -100000
cur = 0
array = [-2, 1, -3, 4, -1, 3, -5, 4]

for i in array:
    if cur < 0:
        cur = 0
    cur += i
    max_sum = max(max_sum, cur)

print(max_sum)