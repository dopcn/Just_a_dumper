//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBIMCarrirViewProtocol-Protocol.h"

@class NSString, UIButton, UILabel, WBIMInviteResumeCardModel;

@interface WBIMInviteResumeView : UIView <WBIMCarrirViewProtocol>
{
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UIButton *_sendButton;
    WBIMInviteResumeCardModel *_resumeCardModel;
}

+ (id)createCarrirView;
@property(retain, nonatomic) WBIMInviteResumeCardModel *resumeCardModel; // @synthesize resumeCardModel=_resumeCardModel;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)didSelectCarrirView;
- (void)updatedeliverResumState;
- (void)clickSendResume;
- (void)fillWithMessageModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

