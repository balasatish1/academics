
vowels = 'aeiouAEIOU'

my_str = 'bala satish malladi'

count = sum([1 for ch in my_str if ch in vowels])

print(count)
