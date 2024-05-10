n1=input()
n2=input()
n3=input()

if n1 == "vertebrado":
    if n2 =="ave":
        if n3 =="carnivoro":
            print("aguia")
        elif n3=="onivoro":
            print("pomba")
    elif n2 == "mamifero":
        if n3 == "onivoro":
            print("homem")
        elif n3=="herbivoro":
            print("vaca")
elif n1== "invertebrado":
    if n2=="inseto":
        if n3=="hematofago":
            print("pulga")
        elif n3=="herbivoro":
            print("lagarta")
    elif n2=="anelideo":
        if n3=="hematofago":
            print("sanguessuga")
        elif n3=="onivoro":
            print("minhoca")
