//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ATTeacherModelDataChangedListener-Protocol.h"

@class ATAvatarView, ATLabelTagsView, ATTeacherModel, NSString, UIButton, UILabel, UIView;
@protocol ATTeacherTableViewCellDelegate;

@interface ATTeacherTableViewCell : UITableViewCell <ATTeacherModelDataChangedListener>
{
    UIView *_panelView;
    ATAvatarView *_avatarView;
    UILabel *_nameLabel;
    ATLabelTagsView *_tagsView;
    UIButton *_callButton;
    UIView *_singleLineView;
    UIView *_teacherInfomaiton;
    UILabel *_leftLabel;
    UILabel *_centerLabel;
    UILabel *_rightLabel;
    UILabel *_waitTimeLabel;
    ATTeacherModel *_model;
    ATTeacherModel *_waitModel;
    long long _cellType;
    id <ATTeacherTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <ATTeacherTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) ATTeacherModel *waitModel; // @synthesize waitModel=_waitModel;
@property(retain, nonatomic) ATTeacherModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)teacherNetwokStatusChanged:(id)arg1;
- (void)teachersViewDidTap;
- (void)callButtonTouched;
- (void)updateWaitTimeTextWithModel:(id)arg1;
- (void)updateNetworkStateWithModel:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubViews;
- (id)getButtonWithFrame:(struct CGRect)arg1;
- (id)getLabelWithFrame:(struct CGRect)arg1 font:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

