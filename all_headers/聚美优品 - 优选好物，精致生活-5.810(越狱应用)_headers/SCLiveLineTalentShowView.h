//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCLiveLineBaseProtocol-Protocol.h"
#import "SCLiveLineViewProtocol-Protocol.h"

@class NSLayoutConstraint, NSString, NSURL, SCLiveLineUserBar, UIButton, UIImageView, UILabel;

@interface SCLiveLineTalentShowView : UIView <SCLiveLineBaseProtocol, SCLiveLineViewProtocol>
{
    _Bool _canceling;
    _Bool _applying;
    unsigned long long liveLineState;
    UIButton *closedButton;
    CDUnknownBlockType closeBlock;
    CDUnknownBlockType cancelBlock;
    CDUnknownBlockType didSeleceLineViewerCallBack;
    CDUnknownBlockType applyLineBlock;
    NSURL *lineUserAvatar;
    UIView *_emptyView;
    UIButton *_applyButton;
    UIView *_requestingView;
    UIImageView *_userHeadImageView;
    UIImageView *_vipLogoImageView;
    UILabel *_userNickNameLabel;
    UILabel *_tipLabel;
    UIButton *_cancelButton;
    SCLiveLineUserBar *_lineUserBar;
    NSLayoutConstraint *_consCancelButtonTop;
    NSLayoutConstraint *_consApplyButtonTop;
}

+ (id)creatView;
@property(nonatomic) _Bool applying; // @synthesize applying=_applying;
@property(nonatomic) _Bool canceling; // @synthesize canceling=_canceling;
@property(nonatomic) __weak NSLayoutConstraint *consApplyButtonTop; // @synthesize consApplyButtonTop=_consApplyButtonTop;
@property(nonatomic) __weak NSLayoutConstraint *consCancelButtonTop; // @synthesize consCancelButtonTop=_consCancelButtonTop;
@property(retain, nonatomic) SCLiveLineUserBar *lineUserBar; // @synthesize lineUserBar=_lineUserBar;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UILabel *userNickNameLabel; // @synthesize userNickNameLabel=_userNickNameLabel;
@property(nonatomic) __weak UIImageView *vipLogoImageView; // @synthesize vipLogoImageView=_vipLogoImageView;
@property(nonatomic) __weak UIImageView *userHeadImageView; // @synthesize userHeadImageView=_userHeadImageView;
@property(nonatomic) __weak UIView *requestingView; // @synthesize requestingView=_requestingView;
@property(nonatomic) __weak UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(nonatomic) __weak UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSURL *lineUserAvatar; // @synthesize lineUserAvatar;
@property(copy, nonatomic) CDUnknownBlockType applyLineBlock; // @synthesize applyLineBlock;
@property(copy, nonatomic) CDUnknownBlockType didSeleceLineViewerCallBack; // @synthesize didSeleceLineViewerCallBack;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock;
@property(nonatomic) __weak UIButton *closedButton; // @synthesize closedButton;
@property(nonatomic) unsigned long long liveLineState; // @synthesize liveLineState;
- (void).cxx_destruct;
- (void)applyButtonEvent:(id)arg1;
- (void)clickCancelLiveLineButtonEvent;
- (void)updateViewAttribute:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

