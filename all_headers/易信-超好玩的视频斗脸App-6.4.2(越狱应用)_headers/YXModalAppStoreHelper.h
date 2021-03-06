//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBProgressHUDWithTimerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class MBProgressHUDWithTimer, NSString;

@interface YXModalAppStoreHelper : NSObject <SKStoreProductViewControllerDelegate, MBProgressHUDWithTimerDelegate>
{
    MBProgressHUDWithTimer *_hud;
}

@property(retain, nonatomic) MBProgressHUDWithTimer *hud; // @synthesize hud=_hud;
- (void).cxx_destruct;
- (void)hideMBProgressHUDByTimeout:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)showStoreProduceInApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

