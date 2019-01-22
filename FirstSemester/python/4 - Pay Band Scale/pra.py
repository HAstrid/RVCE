
d={}
class Employee:
    def salary(self,name, address,panno, basic, tds, deduct):
        self.name = name
        self.address = address
        self.panno = panno
        self.basic= basic
        self.hra = 1.157*basic
        self.cca = 300
        self.da = 0.25*basic
        self.pf = 1800
        self.pt = 200
        self.tds = tds
        self.deduct  = deduct
        netsal = self.basic+self.da+self.hra+self.cca-(self.pf+self.pt+self.tds+self.deduct)
        return netsal

    
    def accept(self):
        name = input("Enter The Name ")
        address = input("Enter The address ")
        panno = input("Enter The panno ")
        basic = int(input("Enter The Basic "))
        tds = int(input("Enter The TDS "))
        deduct =int(input("Enter The deduct "))
        self.netsal  = self.salary(name,address, panno, basic, tds, deduct)

    def display(self):
        print (self.name)
        print (self.address)
        print (self.panno)
        print (self.basic)
        print (self.tds)
        print (self.deduct)
        print (self.hra)
        print (self.cca)
        print (self.pf)
        print (self.pt)
        print (self.da)
        print ("Net Salary of Employee  is ",self.netsal)


    def search(self,name):
        for k,v in d.items():
            if k == name:
                print(v.name,v.basic,v.netsal)
                

e1 = Employee()
e1.accept()
e1.display()

d.update({e1.name:e1})

print (d)
               
e2 = Employee()
e2.accept()
e2.display()
print (d)
