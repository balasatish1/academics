
student = {
  "name": "bala",
  "id": "325103311L03",
  "sem": "3rd",
  "dept": "IT",
  "academic_status": "passed"
}

# student['address'] = 'amalapuram'
# student.setdefault('address', 'amalapuram')
# student.update({'address': 'amalapuram'})
student = {**student, 'address': 'amalapuram'}

key_to_be_searched = "id"
if key_to_be_searched in student.keys():
  print('{} key found'.format(key_to_be_searched))
else:
  print('{} key not found!!'.format(key_to_be_searched))

print(student)
