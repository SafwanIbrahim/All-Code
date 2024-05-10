n=int(input())
ProductCode ={
    11:"Sao Paulo",
    19:"Campinas",
    21:"Rio de Janeiro",
    27:"Victoria",
    31:"Belo Horizonte",
    32:"Juiz de Fora",
    61:"Brasilia",
    71:"Salvador"
}
print(ProductCode.get(n,"DDD nao cadastrado"))