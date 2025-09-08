
def get_count_of_vowels (str):
  return sum([1 for ch in str if ch in 'aeiouAEIOU'])

str_list = input("enter the sentence: ").split(' ')
print(sorted(str_list, key = get_count_of_vowels, reverse = True))

