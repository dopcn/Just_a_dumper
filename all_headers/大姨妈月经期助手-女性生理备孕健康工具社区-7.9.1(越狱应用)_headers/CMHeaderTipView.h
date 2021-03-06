//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CMHModel-Protocol.h"

@class CMHeaderTipModel, DUILabel, NSString, UIButton, UILabel;
@protocol CMHeaderTipViewDelegate;

@interface CMHeaderTipView : UIView <CMHModel>
{
    long long modelType;
    CMHeaderTipModel *_model;
    id <CMHeaderTipViewDelegate> _delegate;
    UILabel *_titleLabel;
    DUILabel *_contentLabel;
    UIButton *_detailButton;
    UIButton *_nextButton;
}

@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) __weak DUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CMHeaderTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMHeaderTipModel *model; // @synthesize model=_model;
@property(nonatomic) long long modelType; // @synthesize modelType;
- (void).cxx_destruct;
- (void)didClickedNextButton:(id)arg1;
- (void)didClickedDetailButton:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isExpire;
@property(readonly) Class superclass;

@end

