//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LFTINAccountInfoModel : NSObject
{
    NSString *_userToken;
    NSString *_userType;
    NSString *_alipaySDKURLScheme;
}

+ (id)createWithUserType:(id)arg1 token:(id)arg2 alipayScheme:(id)arg3;
@property(copy, nonatomic) NSString *alipaySDKURLScheme; // @synthesize alipaySDKURLScheme=_alipaySDKURLScheme;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
- (void).cxx_destruct;

@end

