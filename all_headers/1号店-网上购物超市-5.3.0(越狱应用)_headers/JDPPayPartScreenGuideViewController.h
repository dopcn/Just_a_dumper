//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseViewController.h"

@interface JDPPayPartScreenGuideViewController : CBPaymentBaseViewController
{
    _Bool _isAutoHideAnimation;
}

@property(nonatomic) _Bool isAutoHideAnimation; // @synthesize isAutoHideAnimation=_isAutoHideAnimation;
- (void)private_finishPayment;
- (void)private_appearAnimation;
- (void)private_initGuideView;
- (void)private_setupRightbutton;
- (void)private_setupSelf;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)cb_rightButtonAction:(id)arg1;

@end

