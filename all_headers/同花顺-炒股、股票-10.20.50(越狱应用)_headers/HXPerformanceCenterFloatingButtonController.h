//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HXPerformanceCenterMovableViewController-Protocol.h"

@class NSMutableSet, NSString, UIButton;
@protocol HXPerformanceCenterPresentationModeDelegate;

@interface HXPerformanceCenterFloatingButtonController : UIViewController <HXPerformanceCenterMovableViewController>
{
    UIButton *_floatingButton;
    NSMutableSet *_httpInfoSet;
    NSMutableSet *_leakInfoSet;
    id <HXPerformanceCenterPresentationModeDelegate> _presentationModeDelegate;
}

@property(nonatomic) __weak id <HXPerformanceCenterPresentationModeDelegate> presentationModeDelegate; // @synthesize presentationModeDelegate=_presentationModeDelegate;
- (void).cxx_destruct;
- (double)minimumHeightInMovableContainer;
- (void)containerWillMove:(id)arg1;
- (void)leak:(id)arg1;
- (void)http:(id)arg1;
- (void)showFloatingButton;
- (void)longPressed:(id)arg1;
- (void)buttonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

