#ifndef PAYMENT_H
#define PAYMENT_H
class Payment{
    private:
        int payment_id;
        float amount;
    public:
        Payment();
        Payment(int val, float val2);
        float refund();



};
#endif
