#include "MAIN_COMPOSE.h"


int main(){
    printf("hello world\n");

    // 1. Tạo buffer giả để chứa ASN1 message
    UInt8 asn_msg[1024];       // giả sử buffer 1KB
    UInt16 asn_msg_len = 0;
#if 0
    e2ap_E2connectionUpdate_t e2_update;
    memset(&e2_update, 0, sizeof(e2ap_E2connectionUpdate_t));

    xnap_return_et ret = e2ap_encode_E2connectionUpdate(
        &e2_update,
        asn_msg,
        &asn_msg_len
    );
#endif


#if 1
    e2ap_E2setupResponse_t e2_update;
    memset(&e2_update, 0, sizeof(e2ap_E2setupResponse_t));

    xnap_return_et ret = e2ap_encode_E2setupResponse(
        &e2_update,
        asn_msg,
        &asn_msg_len
    );
#endif

    
    if (ret == XNAP_OK) {
        printf("Encode thành công, chiều dài: %d\n", asn_msg_len);
    } else {
        printf("Encode thất bại, lỗi: %d\n", ret);
    }


    return 0;
}