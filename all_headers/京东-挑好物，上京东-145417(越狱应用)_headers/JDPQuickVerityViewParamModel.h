//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPQuickVerityViewParamModel : NSObject
{
    NSString *_commendPayWay;
    long long _commendPayWayType;
    NSString *_bizMethod;
    NSString *_token;
    NSString *_protocolURL;
}

@property(copy, nonatomic) NSString *protocolURL; // @synthesize protocolURL=_protocolURL;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *bizMethod; // @synthesize bizMethod=_bizMethod;
@property(nonatomic) long long commendPayWayType; // @synthesize commendPayWayType=_commendPayWayType;
@property(copy, nonatomic) NSString *commendPayWay; // @synthesize commendPayWay=_commendPayWay;
- (void).cxx_destruct;

@end

