//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TBCDailyCache;

@interface TBCVitalityPBConfigTools : NSObject
{
    TBCDailyCache *_dailyCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBCDailyCache *dailyCache; // @synthesize dailyCache=_dailyCache;
- (void).cxx_destruct;
- (void)writeConfigToCache:(id)arg1 isPullDown:(_Bool)arg2;
- (long long)refreshCount:(id)arg1 isPullDown:(_Bool)arg2;
- (id)init;

@end

