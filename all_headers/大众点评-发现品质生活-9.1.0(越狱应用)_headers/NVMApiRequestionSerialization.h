//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NVURLRequestSerialization-Protocol.h"

@class NSArray, NSSet, NSString;

@interface NVMApiRequestionSerialization : NSObject <NVURLRequestSerialization>
{
    _Bool _shouldCompressPostBody;
    NSArray *_postForm;
    NSSet *_HTTPMethodsEncodingParametersInURI;
}

@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(retain, nonatomic) NSArray *postForm; // @synthesize postForm=_postForm;
@property(nonatomic) _Bool shouldCompressPostBody; // @synthesize shouldCompressPostBody=_shouldCompressPostBody;
- (void).cxx_destruct;
- (id)serializiongDescription;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 postData:(id)arg3 error:(id *)arg4;
- (id)requestBySerializingTask:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

