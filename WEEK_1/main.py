from area import *

while True:
    print("\n-------------AREA CALCULATOR-------------")
    print("1. Square")
    print("2. Rectangle")
    print("3. Triangle")
    print("4. Circle")
    print("5. Stop")
    ch = int(input("Enter your choice>>> "))
 
    if ch == 1:
        side = float(input("Enter Side>>> "))
        print(f"Area of Square is>>> {square(side)}")
    
    elif ch == 2:
        length = float(input("Enter Length>>> "))
        breadth = float(input('Enter Breadth>>> '))  
        print(f"Area of Rectangle is>>> {rectangle(length , breadth)}")

    elif ch == 3:
        base = float(input("Enter Base>>> "))
        height = float(input("Enter Height>>> ")) 
        print(f"The Area of Triangle is>>> {triangle(base, height)}")  
    
    elif ch == 4:
        radius = float(input('Enter radius>>> ')) 
        print(f"Area of Circle is>>> {circle(radius)}")

    elif ch == 5:
        print("-------------Stopping The Calculator--------------")
        break
    else:
        print("Invalid Choice!!!")    
    

        
