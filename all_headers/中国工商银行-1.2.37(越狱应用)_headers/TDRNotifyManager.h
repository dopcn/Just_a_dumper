//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TDRNotifyManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sema;
    long long _pairValue;
}

+ (id)sharedNFMInstance;
@property(nonatomic) long long pairValue; // @synthesize pairValue=_pairValue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
- (void)TDRNotifySignal;
- (_Bool)TDRNotifyWait;
- (void)NotifyKeyCurStatus:(id)arg1;
- (void)TDRNotifyRegister:(unsigned long long)arg1;
- (void)TDRNotifyRemove;
- (void)resetPairValue;
- (void)dealloc;
- (id)init;

@end

