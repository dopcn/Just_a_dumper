//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KGCUApi : NSObject
{
}

+ (id)UDID;
+ (id)requestURLWithPath:(id)arg1 params:(id)arg2;
+ (id)baseURL;
+ (id)CUGetPhoneNum:(id)arg1 IMSI:(id)arg2;
+ (id)CUSendUserPhone:(id)arg1 KugouId:(id)arg2 Simno:(id)arg3 m:(id)arg4;
+ (id)CUGetProductNote:(id)arg1 ver:(id)arg2;
+ (id)CUUnSubScribe:(id)arg1 token:(id)arg2;
+ (id)CUUnSubScribe:(id)arg1;
+ (id)CUSubScribe:(id)arg1 simno:(id)arg2;
+ (id)CUUnSubProduct:(id)arg1 token:(id)arg2;
+ (id)CUUnSubProduct:(id)arg1;
+ (id)CUSubProduct:(id)arg1 simno:(id)arg2;
+ (id)CUSendSubCode:(id)arg1 verifyType:(id)arg2;
+ (id)CUUnSubTry:(id)arg1;
+ (id)CUSubTry:(id)arg1 simno:(id)arg2;
+ (id)CUSendTryCode:(id)arg1 verifyType:(id)arg2;
+ (id)CUQrySubedProduct:(id)arg1 access_token:(id)arg2 sync:(_Bool)arg3;
+ (id)CUActive:(id)arg1 simno:(id)arg2;
+ (id)CUSendActiveCode:(id)arg1;
+ (id)CUQryUser:(id)arg1 access_token:(id)arg2;
+ (id)CUGenUnikey;
+ (id)CUNetAuthToken:(id)arg1 use:(id)arg2;
+ (id)CUCodeAuthToken:(id)arg1 verifyCode:(id)arg2;
+ (id)CUSendLoginCode:(id)arg1;
+ (id)proxyValue;
+ (long long)proxyPort;
+ (id)proxyHost;
+ (void)storeProduct:(id)arg1;
+ (id)proxyHeader;
+ (_Bool)setToken:(id)arg1 forPhone:(id)arg2;
+ (id)CurrentToken;
+ (void)saveUnSubedTimeFromTimestamp:(id)arg1;
+ (void)saveSubedTimeFromTimestamp:(id)arg1;
+ (_Bool)checkUnicomState;
+ (id)CUToken:(id)arg1;

@end

