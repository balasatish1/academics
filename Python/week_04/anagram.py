
def are_anagrams(str_one, str_two):

  if (len(str_one) != len(str_two)):
    return False

  s_one = sorted(str_one)
  s_two = sorted(str_two)

  for i in range(len(s_one)):
    if (s_one[i] != s_two[i]):
      return False

  return True

def main():
  str_one = input('Enter string one: ')
  str_two = input('Enter string two: ')
  if (are_anagrams(str_one, str_two)):
    print('{} and {} are anagrams'.format(str_one, str_two))
  else:
    print('{} and {} are not anagrams'.format(str_one, str_two)) 

main()
