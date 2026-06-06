from dataclasses import dataclass

@dataclass
class Product:
    id:int
    desc:str
    amount:int
    
a=[];
b=[];

print(a.__len__() == b.__len__());
        
x = lambda x:x*2
print(x(2))