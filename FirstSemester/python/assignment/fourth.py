data = {'a':1,'b':2,'c':3}
print(data)
# OR
data = dict(a=1, b=2, c=3)
print(data)
# OR
data = {k: v for k, v in (('a', 1),('b',2),('c',3))}
print(data)

data['a'] = 1  # Updates if 'a' exists, else adds 'a'
print(data)
# OR
data.update({'a': 1})
print(data)
# OR
data.update(dict(a=1))
print(data)
# OR
data.update(a=1)
print(data)
data.update({'c': 3, 'd': 4})  # Updates 'c' and adds 'd'
print(data)
