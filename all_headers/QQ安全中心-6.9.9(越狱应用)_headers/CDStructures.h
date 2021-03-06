//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AppInfo {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field6;
};

struct AppSession {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
};

struct Attachment {
    char _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct vector<char, std::__1::allocator<char>> _field3;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CSRSA {
    vector_18281aa6 _field1;
};

struct ClientSashimi {
    int _field1;
    int _field2;
    int _field3;
    vector_18281aa6 _field4;
};

struct CreateParams {
    int detector_type;
    float register_light_thresh_high;
    float register_light_thresh_low;
    float validation_light_thresh_high;
    float validation_light_thresh_low;
    float face_disparity_thresh;
    char *model_file_name;
};

struct DetectRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct ExceptionUpload {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    long long _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field9;
    struct AppSession _field10;
    int _field11;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field12;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field13;
    struct AppInfo _field14;
    struct vector<rqd::AppInfo, std::__1::allocator<rqd::AppInfo>> _field15;
    struct vector<rqd::AppInfo, std::__1::allocator<rqd::AppInfo>> _field16;
    struct vector<rqd::Attachment, std::__1::allocator<rqd::Attachment>> _field17;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field18;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field19;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field20;
    _Bool _field21;
};

struct ExceptionUploadPackage {
    struct vector<rqd::ExceptionUpload, std::__1::allocator<rqd::ExceptionUpload>> _field1;
};

struct FaceDataHandler {
    CDUnknownFunctionPointerType *_field1;
};

struct FaceDelegate {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct FaceDetectDelegate {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct IdcardDetector {
    CDUnknownFunctionPointerType *_field1;
};

struct IosUserInfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    basic_string_1cdf7af0 _field5;
    basic_string_1cdf7af0 _field6;
    basic_string_1cdf7af0 _field7;
    basic_string_1cdf7af0 _field8;
    struct ProductVersion _field9;
    basic_string_1cdf7af0 _field10;
    basic_string_1cdf7af0 _field11;
    short _field12;
    basic_string_1cdf7af0 _field13;
    basic_string_1cdf7af0 _field14;
    basic_string_1cdf7af0 _field15;
    basic_string_1cdf7af0 _field16;
};

struct JceInputStream<analyticstaf::BufferReader> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct JceOutputStream<analyticstaf::BufferWriter> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct LiveDetector {
    CDUnknownFunctionPointerType *_field1;
};

struct MSize {
    int *_field1;
};

struct MStep {
    unsigned long long *_field1;
    unsigned long long _field2[2];
};

struct Mat {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    char *_field5;
    int *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    struct MatAllocator *_field10;
    struct MSize _field11;
    struct MStep _field12;
};

struct MatAllocator;

struct MixPkg {
    struct map<int, std::__1::vector<char, std::__1::allocator<char>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<char, std::__1::allocator<char>>>>> _field1;
};

struct ProductVersion {
    int _field1;
    int _field2;
    int _field3;
};

struct RequestPkg {
    int _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    int _field7;
    struct vector<char, std::__1::allocator<char>> _field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field9;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field10;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field11;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field12;
    long long _field13;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field14;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field15;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field16;
    long long _field17;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field18;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field19;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field20;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field21;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field22;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field23;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field24;
};

struct ResponsePkg {
    char _field1;
    int _field2;
    struct vector<char, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    long long _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
};

struct SCRSA {
    basic_string_1cdf7af0 _field1;
};

struct ServerSashimi {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    vector_18281aa6 _field6;
};

struct SummaryInfo {
    long long _field1;
    char _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
    _Bool _field8;
};

struct ThreshParams {
    double upAngle;
    double downAngle;
    double leftAngle;
    double rightAngle;
    double blinkScore;
    double shakeAngle;
    double nodAngle;
    double mouthOpenScore;
};

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UseInfo {
    long long prevActiveTime;
    long long prevInActiveTime;
    long long prevUseTime;
    _Bool isCrashed;
};

struct UserInfoPackage {
    char _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct vector<rqd::SummaryInfo, std::__1::allocator<rqd::SummaryInfo>> _field4;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field5;
};

struct _Alloc_hider {
    char *_field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct _xmlDoc;

struct _xmlHashTable;

struct _xmlNode;

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlSAXHandler {
    CDUnknownFunctionPointerType internalSubset;
    CDUnknownFunctionPointerType isStandalone;
    CDUnknownFunctionPointerType hasInternalSubset;
    CDUnknownFunctionPointerType hasExternalSubset;
    CDUnknownFunctionPointerType resolveEntity;
    CDUnknownFunctionPointerType getEntity;
    CDUnknownFunctionPointerType entityDecl;
    CDUnknownFunctionPointerType notationDecl;
    CDUnknownFunctionPointerType attributeDecl;
    CDUnknownFunctionPointerType elementDecl;
    CDUnknownFunctionPointerType unparsedEntityDecl;
    CDUnknownFunctionPointerType setDocumentLocator;
    CDUnknownFunctionPointerType startDocument;
    CDUnknownFunctionPointerType endDocument;
    CDUnknownFunctionPointerType startElement;
    CDUnknownFunctionPointerType endElement;
    CDUnknownFunctionPointerType reference;
    CDUnknownFunctionPointerType characters;
    CDUnknownFunctionPointerType ignorableWhitespace;
    CDUnknownFunctionPointerType processingInstruction;
    CDUnknownFunctionPointerType comment;
    CDUnknownFunctionPointerType warning;
    CDUnknownFunctionPointerType error;
    CDUnknownFunctionPointerType fatalError;
    CDUnknownFunctionPointerType getParameterEntity;
    CDUnknownFunctionPointerType cdataBlock;
    CDUnknownFunctionPointerType externalSubset;
    unsigned int initialized;
    void *_private;
    CDUnknownFunctionPointerType startElementNs;
    CDUnknownFunctionPointerType endElementNs;
    CDUnknownFunctionPointerType serror;
};

struct _xmlValidState;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _field1;
};

struct bignum_st;

struct bn_blinding_st;

struct bn_mont_ctx_st;

struct crypto_ex_data_st {
    struct stack_st_void *_field1;
    int _field2;
};

struct engine_st;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct map<int, std::__1::vector<char, std::__1::allocator<char>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<char, std::__1::allocator<char>>>>> {
    struct __tree<std::__1::__value_type<int, std::__1::vector<char, std::__1::allocator<char>>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<char, std::__1::allocator<char>>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<char, std::__1::allocator<char>>>>> {
        struct __tree_node<std::__1::__value_type<int, std::__1::vector<char, std::__1::allocator<char>>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<char, std::__1::allocator<char>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<char, std::__1::allocator<char>>>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct rsa_meth_st;

struct rsa_st {
    int _field1;
    long long _field2;
    struct rsa_meth_st *_field3;
    struct engine_st *_field4;
    struct bignum_st *_field5;
    struct bignum_st *_field6;
    struct bignum_st *_field7;
    struct bignum_st *_field8;
    struct bignum_st *_field9;
    struct bignum_st *_field10;
    struct bignum_st *_field11;
    struct bignum_st *_field12;
    struct crypto_ex_data_st _field13;
    int _field14;
    int _field15;
    struct bn_mont_ctx_st *_field16;
    struct bn_mont_ctx_st *_field17;
    struct bn_mont_ctx_st *_field18;
    char *_field19;
    struct bn_blinding_st *_field20;
    struct bn_blinding_st *_field21;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct stack_st_void;

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct vector<char, std::__1::allocator<char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<char *, std::__1::allocator<char>> {
        char *_field1;
    } _field3;
};

struct vector<char, std::allocator<char>> {
    _Vector_impl_2b779b09 _field1;
};

struct vector<rqd::AppInfo, std::__1::allocator<rqd::AppInfo>> {
    struct AppInfo *_field1;
    struct AppInfo *_field2;
    struct __compressed_pair<rqd::AppInfo *, std::__1::allocator<rqd::AppInfo>> {
        struct AppInfo *_field1;
    } _field3;
};

struct vector<rqd::Attachment, std::__1::allocator<rqd::Attachment>> {
    struct Attachment *_field1;
    struct Attachment *_field2;
    struct __compressed_pair<rqd::Attachment *, std::__1::allocator<rqd::Attachment>> {
        struct Attachment *_field1;
    } _field3;
};

struct vector<rqd::ExceptionUpload, std::__1::allocator<rqd::ExceptionUpload>> {
    struct ExceptionUpload *_field1;
    struct ExceptionUpload *_field2;
    struct __compressed_pair<rqd::ExceptionUpload *, std::__1::allocator<rqd::ExceptionUpload>> {
        struct ExceptionUpload *_field1;
    } _field3;
};

struct vector<rqd::SummaryInfo, std::__1::allocator<rqd::SummaryInfo>> {
    struct SummaryInfo *_field1;
    struct SummaryInfo *_field2;
    struct __compressed_pair<rqd::SummaryInfo *, std::__1::allocator<rqd::SummaryInfo>> {
        struct SummaryInfo *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::vector<unsigned char, std::allocator<unsigned char>>, std::allocator<std::vector<unsigned char, std::allocator<unsigned char>>>> {
    struct _Vector_impl {
        vector_e9587f9f *_M_start;
        vector_e9587f9f *_M_finish;
        vector_e9587f9f *_M_end_of_storage;
    } _M_impl;
};

struct vector<unsigned char, std::allocator<unsigned char>> {
    _Vector_impl_2b779b09 _M_impl;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:
typedef struct {
    char *_M_start;
    char *_M_finish;
    char *_M_end_of_storage;
} _Vector_impl_2b779b09;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    _Bool isEvalTaskFailed;
    _Bool isEvalBan;
    _Bool doingEvalTask;
    _Bool doingLoginMsgTask;
    unsigned int bit;
} CDStruct_517acb8b;

typedef struct {
    _Bool hasUpdated;
    _Bool hasMsgPush;
    int newNum;
} CDStruct_75b8078d;

typedef struct {
    unsigned short wCmd;
    unsigned short wSubCmd;
    short wRst;
    unsigned int dwUsed;
    unsigned int dwCalUsed;
    unsigned short wTry;
    unsigned char acHostName[32];
    unsigned char acHostIp[32];
    unsigned short wPort;
    unsigned char cConn;
    unsigned char cNetType;
    unsigned char cNetwork;
    unsigned char cEncryptType;
    unsigned char acErrorStr[64];
    unsigned short wSendDataLen;
    unsigned short wResvDataLen;
} CDStruct_7a5a57b9;

typedef struct {
    char acHostName[32];
    unsigned short wPort;
    unsigned short wTimeout;
} CDStruct_93d23b61;

// Template types
typedef struct JceInputStream<analyticstaf::BufferReader> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
} JceInputStream_f07640a9;

typedef struct JceOutputStream<analyticstaf::BufferWriter> {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
} JceOutputStream_31132a5e;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _field1;
} basic_string_1cdf7af0;

typedef struct vector<char, std::allocator<char>> {
    _Vector_impl_2b779b09 _field1;
} vector_18281aa6;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    _Vector_impl_2b779b09 _M_impl;
} vector_e9587f9f;

