//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NMT_ICloudRecognitionError-Protocol.h"

@class NMT_TransactionError, NSString;

@interface NMT_CloudRecognitionError : NSObject <NMT_ICloudRecognitionError>
{
    struct ICloudRecognitionError *_cloudRecognitionError;
    int _type;
    NMT_TransactionError *_transactionError;
}

- (void).cxx_destruct;
- (id)toJSON;
- (id)transactionError;
- (int)type;
- (id)initWithError:(const struct ICloudRecognitionError *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

