//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBaseViewCTL.h"

@class TN800UGCSingleton;

@interface TN800ViewCtl : TBBaseViewCTL
{
    BOOL hideNavBar;
    BOOL isLoadding;
    TN800UGCSingleton *logService;
}

@property(nonatomic) BOOL isLoadding; // @synthesize isLoadding;
@property(retain, nonatomic) TN800UGCSingleton *logService; // @synthesize logService;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)showHUDAddedTo:(id)arg1 message:(id)arg2 animated:(BOOL)arg3;
- (void)hideTip;
- (void)showTextTip:(id)arg1;
- (void)showErrorTip:(id)arg1;
- (void)showTip:(id)arg1 imageName:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)didNetworkError:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

