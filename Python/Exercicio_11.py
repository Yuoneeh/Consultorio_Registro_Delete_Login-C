


print("Exercicio (11) Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500.")
somatorio = int(0)
for i in range(0,500):
        if (i % 2) == 0 :
            somatorio += i
            print (i)
print("Soma dos numeros:", somatorio)
        