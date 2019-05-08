#!/usr/bin/python3
def is_pally(str):
    return str == str[::-1]
max_pally = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        result = i * j
        if is_pally(result):
            max_pally = max(max_pally, result)
