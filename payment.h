#ifndef PAYMENT_H
#define PAYMENT_H
class Payment{
    private:
        int payment_id;
        float amount;
    public:
        Payment();
        Payment(int val);
        float refund();
        void make(float val2);


};
#endif
