
with open('words.txt', 'r') as file:
  content = file.read()

words = content.split('\n')
lower_case_words = []

for word in words:
  lower_case_words.append(word.lower())

lower_case_words.sort()
content = '\n'.join(lower_case_words)

file = open('sorted_words.txt', 'w')
file.write(content)