
string = 'nithin denkada'.replace(' ', '')
char_and_frequency = []

char_dict = {}

for char in string:
  char_dict[char] = 0

for char in string:
  char_dict[char] = char_dict[char] + 1

print(char_dict)
