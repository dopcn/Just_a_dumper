//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTWWithdrawDetailTaskProcessItemUIObject, UIButton, UILabel;

@interface MTWWithdrawDetailTaskProcessItemView : UIView
{
    MTWWithdrawDetailTaskProcessItemUIObject *_itemInfo;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_stageLabel;
    UILabel *_messageLabel;
    UIButton *_specifyAccountButton;
    UIView *_separatorLine;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIButton *specifyAccountButton; // @synthesize specifyAccountButton=_specifyAccountButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *stageLabel; // @synthesize stageLabel=_stageLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MTWWithdrawDetailTaskProcessItemUIObject *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;

@end

