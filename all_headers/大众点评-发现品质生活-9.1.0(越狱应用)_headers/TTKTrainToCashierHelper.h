//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTCCashierDelegate-Protocol.h"
#import "XGIRouterProtocol-Protocol.h"

@class NSString, TTKTrainToCashierParameter, UINavigationController, UIViewController;

@interface TTKTrainToCashierHelper : NSObject <XGIRouterProtocol, MTCCashierDelegate>
{
    TTKTrainToCashierParameter *_payInfoParam;
    UINavigationController *_navigationController;
    UIViewController *_sourceViewController;
}

+ (id)sharedInstance;
+ (void)processURL:(id)arg1 fromSource:(id)arg2;
+ (void)load;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) TTKTrainToCashierParameter *payInfoParam; // @synthesize payInfoParam=_payInfoParam;
- (void).cxx_destruct;
- (void)navigateOrderDetail;
- (void)paymentDidFail:(id)arg1;
- (void)paymentDidFinish:(id)arg1;
- (void)paymentDidCancel:(id)arg1 cancelType:(unsigned long long)arg2;
- (void)toMTNativeCashier:(id)arg1;
- (void)toCashier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

