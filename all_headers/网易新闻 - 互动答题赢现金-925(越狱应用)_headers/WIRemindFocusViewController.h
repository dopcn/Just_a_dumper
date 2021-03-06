//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WIEmbedViewController-Protocol.h"

@class NSString, UIButton, UILabel, UIView, WIHQActivity;

@interface WIRemindFocusViewController : UIViewController <WIEmbedViewController>
{
    WIHQActivity *_activity;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _pushAction;
    UILabel *_centerShowLabel;
    UIView *_centerWhiteView;
    UIButton *_remindButton;
}

@property(retain, nonatomic) UIButton *remindButton; // @synthesize remindButton=_remindButton;
@property(retain, nonatomic) UIView *centerWhiteView; // @synthesize centerWhiteView=_centerWhiteView;
@property(retain, nonatomic) UILabel *centerShowLabel; // @synthesize centerShowLabel=_centerShowLabel;
@property(copy, nonatomic) CDUnknownBlockType pushAction; // @synthesize pushAction=_pushAction;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) WIHQActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)setShowState;
- (void)setDismissState;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getDaysString:(unsigned long long)arg1;
- (id)getTimeStringWithInterval:(unsigned long long)arg1;
- (void)configCentterShow;
- (void)didReceiveMemoryWarning;
- (void)closeRemind;
- (void)remindNotification;
- (void)showAnimationAction;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

