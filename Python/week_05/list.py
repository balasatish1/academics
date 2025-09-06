# list.append(<element>) which adds element at the end of the list
# list.insert(<index>,<element>) which adds element at particular index
# list.extend(<interable>)


def main():
  my_list = [1, 2, 3, 4, 5]
  my_list.append(6)
  print(my_list)

  my_list.insert(6, 7)
  print(my_list)


main()
