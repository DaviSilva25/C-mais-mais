def count_missed_trains(s):
    decimal_time = int(s, 2)
    count = 0
    k = 0
    while 4 ** k < decimal_time:
        count += 1
        k += 1
    return count 

# Example usage:
s = input().strip()
missed_trains = count_missed_trains(s)
print(missed_trains)
