

class Check:
    name = "Akash"
    age="nahi pata"

obj=Check()

setattr(obj,'name',"Akash Kuku")
print(obj.name)
setattr(obj,'age',20)
print(obj.age)

print(getattr(obj,'name'))
print(hasattr(obj,'age'))
delattr(obj,'age')
delattr(obj,'name')
print(obj.name)
print(obj.age)

