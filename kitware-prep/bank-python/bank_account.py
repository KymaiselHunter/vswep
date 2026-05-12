class BankAccount:
    def __init__(self, owner, balance):
        self.owner, self.balance = owner, balance

    def display_balance(self):
        print(self.owner, "has", self.balance, "dollars")

    def deposit(self, amount):
        if amount < 0:
            return
        
        self.balance += amount

    def withdraw(self, amount):
        if amount > self.balance or amount < 0:
            return

        self.balance -= amount