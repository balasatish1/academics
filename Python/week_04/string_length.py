
# Aim : to find the length of a string without using len() method

def get_string_length(str):
  length = 0

  for i in str:
    length += 1

  return length


def main():
  str = input('Enter any string: ')
  length = get_string_length(str)
  print('Length of "{}" is {}'.format(str, length))

main()
