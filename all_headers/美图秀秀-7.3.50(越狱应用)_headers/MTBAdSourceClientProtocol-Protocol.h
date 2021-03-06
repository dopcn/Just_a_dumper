//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol MTBPhasedRequestProtocol, MTBSimpleRequest;

@protocol MTBAdSourceClientProtocol <NSObject>
- (id <MTBPhasedRequestProtocol>)createPhasedRequestForPosition:(NSString *)arg1 adSource:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (id <MTBSimpleRequest>)createRequestWithPositionID:(NSString *)arg1 adSource:(NSString *)arg2 attributes:(NSDictionary *)arg3;

@optional
- (void)setupWithAppKey:(NSString *)arg1;
@end

