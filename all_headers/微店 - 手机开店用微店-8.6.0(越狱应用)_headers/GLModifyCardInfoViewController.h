//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLCardInfoViewController.h"

@class GLPaymentModeData;

@interface GLModifyCardInfoViewController : GLCardInfoViewController
{
    GLPaymentModeData *_paymentModeData;
}

@property(retain, nonatomic) GLPaymentModeData *paymentModeData; // @synthesize paymentModeData=_paymentModeData;
- (void).cxx_destruct;
- (void)nextButtonDidClick;
- (id)bankCardInfo;
- (void)bankItemDataDidChange;
- (void)rebuildContentViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

