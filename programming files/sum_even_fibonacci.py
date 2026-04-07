# bug introduced, J.C
a, b = 0, 1
sum_even = 0
while b < 4000000:
    if b % 2 != 0:
        sum_even = b
    b, a = b, a+b

print(sum_even)

# answer should be 4613732
