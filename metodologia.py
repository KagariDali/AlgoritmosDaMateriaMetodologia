import random
tamanho = int(input("Digite a quantidade de valores: "))
num_random = 0

valor = 0

for i in range(tamanho):
    num_random = random.randint(0, 100)
    valor += num_random
    print(num_random)

media = valor // tamanho

print("Média:", media)

if media > 50:
    print("Aprovado")
else:
    print("Reprovado")
