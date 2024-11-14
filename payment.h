#ifndef PAYMENT_H
#define PAYMENT_H
class Payment{
    private:
        int payment_id;
        float amount;
    public:
        Payment();
        Payment(int val, float val2);
        void refund();
        int get_payment_id();
        float get_amount();

};
#endif
