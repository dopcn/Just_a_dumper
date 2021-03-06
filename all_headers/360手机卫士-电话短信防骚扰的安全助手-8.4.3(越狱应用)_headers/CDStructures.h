//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class QHPhotoSimilarityCalculator;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioDataInfo {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    id _field16;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct GPUTextureOptions {
    unsigned int minFilter;
    unsigned int magFilter;
    unsigned int wrapS;
    unsigned int wrapT;
    unsigned int internalFormat;
    unsigned int format;
    unsigned int type;
};

struct IApp;

struct IVProto {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
};

struct KSJSONDecodeCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct MGIDCardAttr {
    float low_quality;
    struct CGPoint corner_points[4];
    struct CGPoint portrait_points[4];
    float angles[3];
    _Bool has_specular_highlight;
    int side;
    float brightness;
    _Bool has_shadow;
    int idcard_type;
    _Bool legality;
};

struct MGSwipeAnimationData {
    double from;
    double to;
    double duration;
    double start;
};

struct NSArray {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct PhotoTaskCallback {
    CDUnknownFunctionPointerType *_vptr$MessageTaskCallback;
    QHPhotoSimilarityCalculator *calc;
};

struct QSdkListener;

struct QSdkSearch {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    struct QSdkListener *_field3;
    struct IApp *_field4;
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

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    union {
        long long _field1;
        unsigned long long _field2;
        double _field3;
    } _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct _00066 {
    struct _00651 {
        struct _00651 {
            struct _00219 _field1;
            struct _00219 _field2;
        } _field1;
        int _field2;
        int _field3;
        float _field4;
    } _field1;
    _Bool _field2;
    int _field3;
    int _field4;
    int _field5;
    unsigned long long _field6;
    struct _00445 {
        struct unique_ptr<_00509::_00445::_00716, std::__1::default_delete<_00509::_00445::_00716>> _field1;
    } _field7;
    struct _00206 {
        struct unique_ptr<_00509::_00206::_00716, std::__1::default_delete<_00509::_00206::_00716>> _field1;
    } _field8;
    struct _00599 _field9;
    struct _00084 {
        struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> _field1;
        _Bool _field2;
    } _field10;
    struct _00460 _field11;
    int _field12;
    struct _00111 {
        struct _00184 _field1;
        struct _00599 _field2;
    } _field13;
};

struct _00184 {
    int _field1;
    struct _00210 {
        _Bool _field1;
        struct _00367 _field2;
        struct _00367 _field3;
        struct _00599 _field4;
    } _field2;
};

struct _00219 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct _00348 {
    int _field1;
    float _field2;
    float _field3;
};

struct _00367 {
    _Bool _field1;
    int _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
};

struct _00460 {
    unsigned long long _field1;
    struct _00650 _field2;
    float _field3;
};

struct _00599 {
    struct _00611 {
        _Bool _field1;
        _Bool _field2;
        _Bool _field3;
        _Bool _field4;
        _Bool _field5;
        _Bool _field6;
        _Bool _field7;
        _Bool _field8;
    } _field1;
    struct _00650 _field2;
    struct _00687 {
        float _field1;
        float _field2;
    } _field3;
    struct _00348 _field4[7];
    struct _00348 _field5[7];
    unsigned long long _field6;
    struct _00671 {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } _field7;
    struct _00614 {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } _field8;
    struct _00621 {
        float _field1;
        float _field2;
        float _field3;
    } _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
};

struct _00650 {
    float _field1;
    float _field2;
};

struct _00716;

struct _DetectorConfig {
    double timeout;
    int maxTaskQueueSize;
    int minFaceSize;
    float maxYawAngle;
    float maxPitchAngle;
    float minBrightness;
    float maxBrightness;
    float maxMotionBlurness;
    float maxGaussianBlurness;
    float maxEyeOpen;
    float maxMouthOpen;
    float minIntegrity;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct _SYMM_KEY {
    short _field1;
    unsigned char _field2;
    unsigned char _field3[16];
    unsigned int _field4;
};

struct _void {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long _field1;
};

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

struct internal_state;

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field7;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct shared_ptr<_00211::_00337::_00436> {
    struct _00436 *_field1;
    struct __shared_weak_count *_field2;
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

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct tagIFAddrsSnapshotData {
    unsigned int wwan_ibytes;
    unsigned int wwan_obytes;
    unsigned int wifi_ibytes;
    unsigned int wifi_obytes;
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> _field1;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct tm_zip_s {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct unique_ptr<_00509::_00206::_00716, std::__1::default_delete<_00509::_00206::_00716>> {
    struct __compressed_pair<_00509::_00206::_00716 *, std::__1::default_delete<_00509::_00206::_00716>> {
        struct _00716 *_field1;
    } _field1;
};

struct unique_ptr<_00509::_00445::_00716, std::__1::default_delete<_00509::_00445::_00716>> {
    struct __compressed_pair<_00509::_00445::_00716 *, std::__1::default_delete<_00509::_00445::_00716>> {
        struct _00716 *_field1;
    } _field1;
};

struct vm_statistics {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char *_field2;
} CDStruct_91a0c811;

typedef struct {
    double x;
    double y;
    double WHScale;
} CDStruct_ada9a10e;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long addition;
    long long deletion;
    long long modification;
    long long same;
    long long contacts;
    long long local;
} CDStruct_7509e4cb;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    CDUnknownFunctionPointerType _field1;
    int _field2;
    struct *_field3[0];
} CDStruct_6a6307c4;

typedef struct {
    struct tm_zip_s _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_192a48cb;

typedef struct {
    _Bool has_face;
    float yaw;
    float pitch;
    float blurness_motion;
    float blurness_gaussian;
    struct CGRect face_rect;
    float eye_left_hwratio;
    float eye_right_hwratio;
    float mouth_hwratio;
    float glasses;
    float brightness;
    float integrity;
    int frame_type;
    _Bool not_video;
    float smooth_yaw;
    float smooth_pitch;
    float eye_left_det;
    float eye_right_det;
    float mouth_det;
    float eye_left_occlusion;
    float eye_right_occlusion;
    float mouth_occlusion;
    _Bool eye_blink;
    _Bool mouth_open;
    _Bool pitch3d;
    float quality;
    float smooth_quality;
} CDStruct_1e35fe44;

