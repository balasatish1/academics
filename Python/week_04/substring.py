
import re

main_str = input('Enter the main string: ')
sub_str = input('Enter the substring: ')

if (re.search(sub_str, main_str)):
  print('"{}" is present in "{}"'.format(sub_str, main_str))
else:
  print('"{}" is not present in "{}"'.format(sub_str, main_str))
