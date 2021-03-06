//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDBaseToastViewDelegate-Protocol.h"

@class CONotifyInfosConfig, NSString, UIButton, UIImageView, UILabel;

@interface NOINotifyView : UIView <JDBaseToastViewDelegate>
{
    double _originalY;
    double _duration;
    id _delegate;
    long long _notifyType;
    CONotifyInfosConfig *_config;
    UIButton *_closeButton;
    UIImageView *_bannerImageView;
    UILabel *_messageLabel;
    UIImageView *_iconView;
}

+ (id)viewWithConfig:(id)arg1 andType:(long long)arg2;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) CONotifyInfosConfig *config; // @synthesize config=_config;
@property(nonatomic) long long notifyType; // @synthesize notifyType=_notifyType;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)getClickEventId;
- (id)getExpoEventId;
- (id)getEventParam;
- (void)didClickBackgroundInToastView:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)__calculateTipsLabelSize;
- (void)__dismiss;
- (void)__showWithAnimation;
- (void)closeNotify:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showInViewSynchronous:(id)arg1;
- (id)initWithConfig:(id)arg1 andType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

