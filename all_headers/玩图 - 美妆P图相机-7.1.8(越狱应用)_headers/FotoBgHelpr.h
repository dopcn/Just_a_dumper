//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FotoBgHelpr : NSObject
{
    NSMutableArray *_itemArr;
}

+ (void)googleAnalyticsEvent:(id)arg1 action:(id)arg2 label:(id)arg3;
+ (id)GAISampleRate;
+ (id)GAIPropertyId;
+ (void)checkRemoteNotificationDic:(id)arg1 inBg:(_Bool)arg2;
+ (id)sharedSingleton;
@property(retain, nonatomic) NSMutableArray *itemArr; // @synthesize itemArr=_itemArr;
- (void)requestData;
- (_Bool)checkRequestTimeAvaliable;
- (void)saveRequestTimeState;
- (id)aes256_decrypt_data:(id)arg1 key:(id)arg2;
- (void)enterBackground;
- (id)initSingleton;

@end

