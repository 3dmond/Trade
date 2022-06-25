

#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H


class Transactions
{
    public:
        void ifDepositIsBelowMinimum (int a);
        void depositBalance (int a, double *transactionFee, double *depositAmount);

};

#endif // TRANSACTIONS_H
