//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NBNetworkReqData-Protocol.h"
#import "UCJSONSerializeProtocol-Protocol.h"

@class NSString;

@interface NBReadTimeExChangeReqData : NSObject <UCJSONSerializeProtocol, NBNetworkReqData>
{
    NSString *_userID;
    NSString *_sign;
    long long _timestamp;
    NSString *_reqEncryptType;
    NSString *_reqEncryptParam;
    NSString *_resEncryptType;
}

+ (id)propertyMapping;
@property(copy, nonatomic) NSString *resEncryptType; // @synthesize resEncryptType=_resEncryptType;
@property(copy, nonatomic) NSString *reqEncryptParam; // @synthesize reqEncryptParam=_reqEncryptParam;
@property(copy, nonatomic) NSString *reqEncryptType; // @synthesize reqEncryptType=_reqEncryptType;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

