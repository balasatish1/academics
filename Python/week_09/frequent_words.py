
with open('frequent.txt', 'r') as file:
  content = file.read()

words = content.split(' ')

frequencies = {}

max = 0
for word in words:
  if word not in frequencies.keys():
    frequencies[word] = 1
  else:
    frequencies[word] += 1

  if frequencies[word] > max:
    max = frequencies[word]

for key in frequencies.keys():
  if (max == frequencies[key]):
    print(key, '->', frequencies[key])