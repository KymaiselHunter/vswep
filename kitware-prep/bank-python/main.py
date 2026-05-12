from bank_account import BankAccount

def main():
    print("hello financial world!!")

    account = BankAccount("Kyle", 100)

    account.display_balance()

    account.deposit(50)
    account.display_balance()

    account.withdraw(30)
    account.display_balance()

if __name__ == "__main__":
    main()