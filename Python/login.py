

def main():
    login()

def login():
    option = "y"

    
    print("LOGIN")

    while option == "y":
        usuario = str(input("Insira o usuário:"))
        senha = str(input("Insira sua senha:"))
        option = str(input("Deseja realizar o login novamente y/n:"))
    main_menu()

def main_menu():
    print("Bem vindo ao Programa teste")

main()