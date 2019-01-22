class Employee(object):
   
    #Magic method - setattr to Set the attribute for the class
    def __setattr__(self, name, value):
        #print(name)
        if name=="empno" or name=="empname" or name=="designation" or name=="empstatus":
            self.__dict__[name] = value
            print("value set for %s -- %s"%(name,value))
        else:
            print("cannot set '%s' attributes other than - empno,empname,designation,empstatus"%(name))
            return 0
           
    #Magic method - getattr to get the attribute for the class
    def __getattr__(self, name):
         if not(name=="empno" or name=="empname" or name=="designation" or name=="empstatus"):
                return self.__dict__[name]
        # we don't need a special call to super here because getattr is only
        # called when an attribute is NOT found in the instance's dictionary
        try:
            if not(name=="empno" or name=="empname" or name=="designation" or name=="empstatus"):
                return "Attribute not found -- %s"%(name)
        except KeyError:
            raise AttributeError

e = Employee()       
print("welcome to the program set attribute and get attribute")
print("Enter the attributes to add to the Employee class")
print("Enter the number of attributes for the Employee class")
print("attributes should be same as in list - empno,empname,designation,empstatus")
lp = True
while(lp):
    print("1.Set attribute")
    print("2.Get attribute")
    print("3.Display")
    print("4.Exit")
    ch=int(input("Enter the choice"))
    if ch==1:
      a = input("enter the attribute name:")
      v = input("enter the attribute value:")
      valuestatus=setattr(e, a, v)
      if(valuestatus==0):
         print("attribute not added")
    elif ch==2:
      a=input("ENter attribute name")
      v=e.__getattr__(a)
      print(v)
    elif ch==3:
      print(e.__dict__) #check if it is print() or just e.__dict__
    else:
      break
