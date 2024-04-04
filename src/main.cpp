#include <iostream>
#include "loan.h"

using namespace std;

int main()
{
  Loan a;
  a.setBankName("America First Credit Union");
  a.setBorrowerName("Frank Jones");
  a.setAnnualInterestRate(0.58);
  a.setNumYears(20);
  a.setLoanAmt(100000);
  cout << a.loanStatement() << endl;

  Loan b("Alicia Johnson");
  b.setBankName("Moutain America Bank");
  b.setAnnualInterestRate(0.635);
  b.setNumYears(12);
  b.setLoanAmt(5000);
  cout << b.loanStatement() << endl;

  Loan c("Lisa George", .899, 12);
  c.setBankName("Chase Bank");
  c.setLoanAmt(3000);
  cout << c.loanStatement() << endl;

  Loan d("Chase Bank", "Steve Cobble", .675, 10, 25000);
  cout << d.loanStatement() << endl;

  Loan *e = new Loan();
  e->setBankName("Wells Fargo");
  e->setBorrowerName("Sam Poppyflower");
  e->setAnnualInterestRate(0.599);
  e->setNumYears(20);
  e->setLoanAmt(90000);
  cout << e->loanStatement() << endl;

  Loan *f = new Loan("Samson Jones");
  f->setBankName("Key Bank");
  f->setAnnualInterestRate(.925);
  f->setNumYears(5);
  f->setLoanAmt(6000);
  cout << f->loanStatement() << endl;

  Loan *g = new Loan("Cherish Winters", .555);
  g->setBankName("America First Credit Union");
  g->setNumYears(14);
  g->setLoanAmt(40000);
  cout << g->loanStatement() << endl;

  Loan *h = new Loan("Wells Fargo", "Audrey Albert", .815, 10, 30000);
  cout << h->loanStatement() << endl;

  delete e;
  delete f;
  delete g;
  delete h;

  return 0;
}