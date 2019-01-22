while True:
   print ("1 Enter The File Name of Source and Destination File ")
   print ("2 Opening a file in Read and Write Mode")
   print ("3 Writing to a File ")
   print ("4 Reading the content in the File ")
   print ("5 Copying the content to a new file ")
   print ("6 Closing the File ")
   ch = int(input("Enter the Choice "))
   if ch == 1:
      sname=input("Enter Existing file name ")
      dname=input("Enter new file name ")
      print ("Two Files Created ")
   if ch == 2:
      try:         
         A = open(sname,"r")
         B = open(dname,"w")
      except FileNotFoundError:                 # 1 
         print ("-"*60)
         print ("FileNotFoundError: File Note Found ")
         print ("-"*60)
      except NameError:                         # 2
         print ("-"*60)
         print ("NameError: Plz Create The File Before Opening it ")
         print ("-"*60)
      else:
         print ("-"*60)
         print("Operation Done succussfully ")
         print ("-"*60)
   if ch == 3:
      try:
         a = A.read()
         B.write(a)
      except NameError:
         print ("-"*60)
         print ("NameError: Plz Open the file first ")
         print ("-"*60)
      else:
         print ("-"*60)
         print ("File successfully copied ")
         print ("-"*60)
         A.close()
         B.close()
   if ch == 4:
      try:
         B.read()
      except ValueError:                        # 3              
         print ("-"*60)
         print ("ValueError: Plz Open the file first ")
         print ("-"*60)
   if ch == 5:
      try:
         A = open(sname,"r")
         B = open(dname,"w")
         str1=A.read()
         B.write(str1)
      except IOError:                           # 4 
         print ("-"*60)
         print ("Error: can\'t find file or read data ")
         print ("-"*60)
      else:
         print ("File successfully copied ")
         A.close()
         B.close()
   if ch==6:
      try:
         print(A/B)
      except TypeError:                         # 5 
         print ("-"*60)
         print ("TypeError: Cannot do this Operation ")
         print ("-"*60)
      
