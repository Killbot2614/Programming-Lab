/* Create a Class AccountDetails and define methods : deposit, withdraw, balance.

   Create two sub classes SavingsAccount  with method AddInterest  and CheckingAccount with method DeductFee for the Class BankAccount.
*/

import java.util.Scanner;

class BankAccount {
    int Balance = 10000;
    void SetBalance(int Bal) {
        this.Balance = Bal;
    }
    int accountBalance() {
        return this.Balance;
    }
}

class AccountDetails extends CheckingAccount {
    void deposit(int amt) {
        int bal = accountBalance();
        System.out.println("Amount Deposited : "+amt);
        SetBalance(bal+amt);
    }
    void withdraw(int amt) {
        int bal = accountBalance();
        System.out.println("Amount Withdrawn : "+(amt));
        SetBalance(bal-amt);
    }
}

class SavingAccount extends  BankAccount{
    void interest(){
        int bal = accountBalance();
        int interest = (int)(bal * 0.05);
        System.out.println("Balance with Interest : "+(bal+interest));
        SetBalance(bal+interest);
    }
}

class CheckingAccount extends SavingAccount {
    void deduct(int amt){
        int bal = accountBalance();
        System.out.println("Fee Deducted : "+(amt));
        SetBalance(bal-amt);
    }
}

class prog {
    public static void main(String args[]) {
        AccountDetails AD = new AccountDetails();
        Scanner scan = new Scanner(System.in);
        int dep = scan.nextInt();
        int withDraw = scan.nextInt();
        int Fee = scan.nextInt();
        AD.deposit(dep);
        AD.interest();
        AD.withdraw(withDraw);
        int balance = AD.accountBalance();
        System.out.println("Balance : "+balance);
        AD.deduct(Fee);
        balance = AD.accountBalance();
        System.out.println("Balance : "+balance);
    }
}

/*  (1)
  Input: 50000
         2000
		 25000
  Output: Amount Deposited : 50000
          Balance with Interest : 63000
          Amount Withdrawn : 2000
          Balance : 61000
          Fee Deducted : 25000
          Balance : 36000

  (2)
  Input: 70000
         2000
         25000
  Output: Amount Deposited : 70000
          Balance with Interest : 84000
          Amount Withdrawn : 2000
          Balance : 82000
          Fee Deducted : 25000
          Balance : 57000
*/