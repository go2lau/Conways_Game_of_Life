#include "payment.h"

Payment::Payment(){
    payment_id=0;
    amount=0;
}

Payment::Payment(int payment_id_){
    payment_id= payment_id_;


}

void Payment::make(float amount_){
    amount=amount_;
}

float Payment::refund(){
    amount=0;
    payment_id=0;
}
