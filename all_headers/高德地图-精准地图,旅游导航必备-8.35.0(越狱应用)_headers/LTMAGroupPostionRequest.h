//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSBaseHttpRequest.h"

@class NSString;

@interface LTMAGroupPostionRequest : LTMAOSBaseHttpRequest
{
    NSString *_teamId;
    NSString *_locInfo;
    NSString *_teamStamp;
    NSString *_memberStamp;
    NSString *_timestamp;
}

+ (id)bizLogicName;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *memberStamp; // @synthesize memberStamp=_memberStamp;
@property(copy, nonatomic) NSString *teamStamp; // @synthesize teamStamp=_teamStamp;
@property(copy, nonatomic) NSString *locInfo; // @synthesize locInfo=_locInfo;
@property(copy, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
- (void).cxx_destruct;
- (void)setParams:(id)arg1;
- (id)init;

@end

