//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMAOSCommonFun : NSObject
{
}

+ (id)crashRequestString;
+ (void)removeMarkReqeust:(id)arg1;
+ (void)addMarkReqeust:(id)arg1;
+ (void)logHTTPSWithURL:(id)arg1 type:(id)arg2;
+ (id)doHTTPSRequestUrl:(id)arg1 needLog:(_Bool)arg2;
+ (id)HTTPSRequestUrl:(id)arg1 needLog:(_Bool)arg2;
+ (id)HTTPSRequestUrl:(id)arg1;
+ (void)addHTTPSBlackName:(id)arg1;
+ (void)setHTTPSSwtich:(_Bool)arg1;
+ (_Bool)HTTPSSwtich;
+ (_Bool)isBlackName:(id)arg1;
+ (_Bool)isHTTPSHost:(id)arg1;
+ (void)HFResetHttpsWhiteNameWithArray:(id)arg1;
+ (id)carrierInfo;
+ (id)getUserAgentUserInfo;
+ (id)getDownloaderUserInfo;
+ (id)getCSID;
+ (id)downloadRemoveCommonPara:(id)arg1;
+ (id)downloadAddCommonPara:(id)arg1;
+ (id)addCommonParaFromURLString:(id)arg1;
+ (id)CSIDStringFromUrl:(id)arg1;
+ (id)getSpmString:(id)arg1 userId:(id)arg2 session:(id)arg3;
+ (id)encrytXXTEAUrlString:(id)arg1;
+ (id)getBriefUrlParam;
+ (id)getWeekDayStrFromInt:(long long)arg1;
+ (id)getNSStringFromWORD:(unsigned short *)arg1;
+ (id)getServerUrl:(int)arg1;
+ (id)getDeviceId;
+ (id)getSignBySignList:(id)arg1;

@end

