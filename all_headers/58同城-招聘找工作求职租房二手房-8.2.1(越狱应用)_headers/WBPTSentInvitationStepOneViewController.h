//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageBaseViewController.h"

@class NSString, UIButton, UILabel, UIScrollView, UIView, _WBPTSentInvitationStepOneCell;

@interface WBPTSentInvitationStepOneViewController : WBPageBaseViewController
{
    NSString *_phoneNumNeeded;
    NSString *_infoId;
    NSString *_invitationJobTitle;
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
    UILabel *_hintLabel;
    _WBPTSentInvitationStepOneCell *_resumeCell;
    _WBPTSentInvitationStepOneCell *_phoneCell;
    _WBPTSentInvitationStepOneCell *_interviewCell;
    UIButton *_changeStateButton;
}

@property(retain, nonatomic) UIButton *changeStateButton; // @synthesize changeStateButton=_changeStateButton;
@property(retain, nonatomic) _WBPTSentInvitationStepOneCell *interviewCell; // @synthesize interviewCell=_interviewCell;
@property(retain, nonatomic) _WBPTSentInvitationStepOneCell *phoneCell; // @synthesize phoneCell=_phoneCell;
@property(retain, nonatomic) _WBPTSentInvitationStepOneCell *resumeCell; // @synthesize resumeCell=_resumeCell;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *invitationJobTitle; // @synthesize invitationJobTitle=_invitationJobTitle;
@property(copy, nonatomic) NSString *infoId; // @synthesize infoId=_infoId;
@property(copy, nonatomic) NSString *phoneNumNeeded; // @synthesize phoneNumNeeded=_phoneNumNeeded;
- (void).cxx_destruct;
- (void)clickInterviewCell;
- (void)clickPhoneCell;
- (void)clickResumeCell;
- (void)updateAllCells;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

