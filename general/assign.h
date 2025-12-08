#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ================= Macros assign =================

// 1️⃣ BIT STRING fixed size
#define ASSIGN_BITSTRING_FIXED2(DstType, SrcType, size) \
void assign_##DstType##_from_##SrcType(DstType* dst, const SrcType* src) { \
    dst->numbits = src->numbits; \
    memcpy(dst->data, src->data, size); \
} \
void assign_##DstType##_hardcode(DstType* dst) { \
    dst->numbits = size*8; \
    for(size_t i=0;i<size;i++) dst->data[i]=(uint8_t)(i+1); \
}

// 2️⃣ BIT STRING dynamic
#define ASSIGN_DYN_BITSTRING2(DstType, SrcType) \
void assign_##DstType##_from_##SrcType(DstType* dst, const SrcType* src) { \
    dst->numbits = src->numbits; \
    if(src->numbits>0){ \
        size_t numBytes=(src->numbits+7)/8; \
        dst->data=malloc(numBytes); \
        memcpy(dst->data, src->data, numBytes); \
    } else dst->data=NULL; \
} \
void assign_##DstType##_hardcode(DstType* dst){ \
    static const uint8_t sample[]={0xAA,0x55}; \
    dst->numbits=sizeof(sample)*8; \
    dst->data=malloc(sizeof(sample)); \
    memcpy(dst->data,sample,sizeof(sample)); \
} \
void free_##DstType(DstType* dst){ if(dst->data){ free(dst->data); dst->data=NULL; } }

// 3️⃣ INTEGER / ENUM
#define ASSIGN_PRIMITIVE2(DstType, SrcType, val) \
void assign_##DstType##_from_##SrcType(DstType* dst, const SrcType* src){ *dst=*src; } \
void assign_##DstType##_hardcode(DstType* dst){ *dst=val; }

// 4️⃣ OCTETSTRING fixed size
#define ASSIGN_OCTETSTRING_FIXED2(DstType, SrcType, size) \
void assign_##DstType##_from_##SrcType(DstType* dst, const SrcType* src){ \
    dst->numocts=src->numocts; \
    memcpy(dst->data, src->data, size); \
} \
void assign_##DstType##_hardcode(DstType* dst){ \
    dst->numocts=size; \
    for(size_t i=0;i<size;i++) dst->data[i]=(uint8_t)i; \
}

// 5️⃣ OCTETSTRING dynamic
#define ASSIGN_DYN_OCTETSTRING2(DstType, SrcType) \
void assign_##DstType##_from_##SrcType(DstType* dst, const SrcType* src){ \
    dst->numocts=src->numocts; \
    if(dst->numocts>0){ \
        dst->data=malloc(dst->numocts); \
        memcpy(dst->data, src->data, dst->numocts); \
    } else dst->data=NULL; \
} \
void assign_##DstType##_hardcode(DstType* dst){ \
    static const uint8_t sample[]={0x10,0x20,0x30}; \
    dst->numocts=sizeof(sample); \
    dst->data=malloc(dst->numocts); \
    memcpy(dst->data, sample, dst->numocts); \
} \
void free_##DstType(DstType* dst){ if(dst->data){ free(dst->data); dst->data=NULL; } }

// 6️⃣ PRINTABLESTRING
#define ASSIGN_PRINTABLESTRING2(DstType, SrcType) \
void assign_##DstType##_from_##SrcType(DstType* dst, const SrcType* src){ \
    if(src && *src) *dst=strdup(*src); else *dst=NULL; \
} \
void assign_##DstType##_hardcode(DstType* dst){ *dst=strdup("Hardcoded"); } \
void free_##DstType(DstType* dst){ if(*dst){ free((void*)*dst); *dst=NULL; } }

// ==============================================
// Typedefs examples

// BIT STRING fixed
typedef struct { uint32_t numbits; uint8_t data[4]; } e2ap_BitString4;
typedef struct { uint32_t numbits; uint8_t data[4]; } _e2ap_BitString4_t;
ASSIGN_BITSTRING_FIXED2(e2ap_BitString4,_e2ap_BitString4_t,4)

// BIT STRING dynamic
typedef struct { uint32_t numbits; uint8_t* data; } ASN1DynBitStr;
typedef ASN1DynBitStr e2ap_BitStringDyn;
typedef ASN1DynBitStr _e2ap_BitStringDyn_t;
ASSIGN_DYN_BITSTRING2(e2ap_BitStringDyn,_e2ap_BitStringDyn_t)

// INTEGER / ENUM
typedef uint32_t e2ap_Integer;
typedef uint32_t _e2ap_Integer_t;
ASSIGN_PRIMITIVE2(e2ap_Integer,_e2ap_Integer_t,183)

typedef enum { RED=0, GREEN=1, BLUE=2 } Color;
typedef uint32_t _Color_t;
ASSIGN_PRIMITIVE2(Color,_Color_t,RED)

// OCTETSTRING fixed
typedef struct { uint32_t numocts; uint8_t data[8]; } e2ap_OctetString8;
typedef struct { uint32_t numocts; uint8_t data[8]; } _e2ap_OctetString8_t;
ASSIGN_OCTETSTRING_FIXED2(e2ap_OctetString8,_e2ap_OctetString8_t,8)

// OCTETSTRING dynamic
typedef struct { uint32_t numocts; uint8_t* data; } OSDynOctStr;
typedef OSDynOctStr e2ap_OctetStringDyn;
typedef OSDynOctStr _e2ap_OctetStringDyn_t;
ASSIGN_DYN_OCTETSTRING2(e2ap_OctetStringDyn,_e2ap_OctetStringDyn_t)

// PRINTABLESTRING
typedef const char* e2ap_Printable;
typedef const char* _e2ap_Printable_t;
ASSIGN_PRINTABLESTRING2(e2ap_Printable,_e2ap_Printable_t)

// TransactionID
typedef uint8_t e2ap_TransactionID;
typedef uint8_t _e2ap_TransactionID_t;
ASSIGN_PRIMITIVE2(e2ap_TransactionID,_e2ap_TransactionID_t,183)

// ==============================================
// Example usage
int main(){
    // 1️⃣ Fixed bit string
    _e2ap_BitString4_t src1={16,{0xAA,0xBB,0xCC,0xDD}};
    e2ap_BitString4 dst1;
    assign_e2ap_BitString4_from__e2ap_BitString4_t(&dst1,&src1);
    assign_e2ap_BitString4_hardcode(&dst1);

    // 2️⃣ Dynamic bit string
    uint8_t bits[]={0x11,0x22};
    _e2ap_BitStringDyn_t src2={16,bits}, dst2;
    assign_e2ap_BitStringDyn_from__e2ap_BitStringDyn_t(&dst2,&src2);
    assign_e2ap_BitStringDyn_hardcode(&dst2);
    free_e2ap_BitStringDyn(&dst2);

    // 3️⃣ Integer
    _e2ap_Integer_t si=123;
    e2ap_Integer di;
    assign_e2ap_Integer_from__e2ap_Integer_t(&di,&si);
    assign_e2ap_Integer_hardcode(&di);

    // 4️⃣ Enum
    _Color_t c1=1;
    Color c2;
    assign_Color_from__Color_t(&c2,&c1);
    assign_Color_hardcode(&c2);

    // 5️⃣ Fixed octet string
    _e2ap_OctetString8_t src3={8,{1,2,3,4,5,6,7,8}}, dst3;
    assign_e2ap_OctetString8_from__e2ap_OctetString8_t(&dst3,&src3);
    assign_e2ap_OctetString8_hardcode(&dst3);

    // 6️⃣ Dynamic octet string
    uint8_t oct[]={0x11,0x22,0x33};
    _e2ap_OctetStringDyn_t src4={3,oct}, dst4;
    assign_e2ap_OctetStringDyn_from__e2ap_OctetStringDyn_t(&dst4,&src4);
    assign_e2ap_OctetStringDyn_hardcode(&dst4);
    free_e2ap_OctetStringDyn(&dst4);

    // 7️⃣ Printable string
    _e2ap_Printable_t ps="Hello World";
    e2ap_Printable pd;
    assign_e2ap_Printable_from__e2ap_Printable_t(&pd,&ps);
    assign_e2ap_Printable_hardcode(&pd);
    free_e2ap_Printable(&pd);

    // 8️⃣ TransactionID
    _e2ap_TransactionID_t tid_src=55;
    e2ap_TransactionID tid_dst;
    assign_e2ap_TransactionID_from__e2ap_TransactionID_t(&tid_dst,&tid_src);
    assign_e2ap_TransactionID_hardcode(&tid_dst);

    printf("Example execution done.\n");
    return 0;
}
