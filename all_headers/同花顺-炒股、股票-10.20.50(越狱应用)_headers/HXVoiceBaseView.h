//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HXVInitialProtocol-Protocol.h"
#import "HXVViewModelBindProtocol-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface HXVoiceBaseView : UIView <HXVInitialProtocol, HXVViewModelBindProtocol>
{
    UIActivityIndicatorView *_activityView;
    UILabel *_messageLabel;
    UIButton *_reloadButton;
}

@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)hideBindNetErrorView;
- (void)showBindNetErrorViewWithMessage:(id)arg1;
- (void)showBindErrorViewWithError:(id)arg1;
- (void)hideWaitingActivityView;
- (void)p_showWaitingActivityViewWithStyle:(long long)arg1;
- (void)showWaitingGrayActivityView;
- (void)showWaitingActivityView;
- (_Bool)isLoading;
- (void)removeErrorView;
- (void)showErrorView:(id)arg1 withReloadHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

