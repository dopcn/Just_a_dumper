//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface APMidasCurrencyMonitor : NSObject <SKProductsRequestDelegate>
{
    _Bool _paying;
    NSMutableArray *_reqs;
    NSMutableArray *_currencies;
    _Bool _foreground;
    unsigned long long _homeTimes;
    CDUnknownBlockType _completion;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long homeTimes; // @synthesize homeTimes=_homeTimes;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)checkNotify;
- (void)addCurrency:(id)arg1;
- (void)startReq;
- (void)onPayProcessEnd:(id)arg1;
- (void)onPayProcessBegin:(id)arg1;
- (void)onEnterForground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)addOrderCurrency:(id)arg1;
- (void)addOneRequest:(CDUnknownBlockType)arg1 selector:(SEL)arg2;
@property(readonly, nonatomic) NSString *totalCurrency;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

