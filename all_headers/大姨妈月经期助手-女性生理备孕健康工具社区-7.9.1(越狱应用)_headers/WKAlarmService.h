//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WKAlarmService : NSObject
{
    NSMutableArray *_delegateItems;
}

+ (id)descriptionForSubtype:(long long)arg1;
+ (id)sharedAlarmService;
@property(retain, nonatomic) NSMutableArray *delegateItems; // @synthesize delegateItems=_delegateItems;
- (void).cxx_destruct;
- (void)alarm:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)alarmWithModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)init;

@end

