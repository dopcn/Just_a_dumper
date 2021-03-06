//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding-Protocol.h"
#import "TBase-Protocol.h"

@class NSMutableArray, NSString;

@interface FBMQTTSendMessageResponseBatch : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_batchId;
    NSString *__thrift_fbTraceMeta;
    struct NSMutableArray *__thrift_responses;
    _Bool __thrift_supported;
    _Bool __thrift_batchId_set;
    _Bool __thrift_fbTraceMeta_set;
    _Bool __thrift_responses_set;
    _Bool __thrift_supported_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSupported;
- (_Bool)supportedIsSet;
@property(nonatomic) _Bool supported;
- (void)unsetResponses;
- (_Bool)responsesIsSet;
@property(retain, nonatomic) NSMutableArray *responses;
- (void)unsetFbTraceMeta;
- (_Bool)fbTraceMetaIsSet;
@property(retain, nonatomic) NSString *fbTraceMeta;
- (void)unsetBatchId;
- (_Bool)batchIdIsSet;
@property(nonatomic) long long batchId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBatchId:(long long)arg1 fbTraceMeta:(id)arg2 responses:(struct NSMutableArray *)arg3 supported:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

