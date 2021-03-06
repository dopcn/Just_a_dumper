//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CMHModel-Protocol.h"

@class CMHeaderPostpartumModel, DUILabel, NSString, UIButton, UILabel;
@protocol CMHeaderPostpartumViewDelegate;

@interface CMHeaderPostpartumView : UIView <CMHModel>
{
    long long modelType;
    CMHeaderPostpartumModel *_model;
    id <CMHeaderPostpartumViewDelegate> _delegate;
    UILabel *_titleLabel;
    DUILabel *_contentLabel;
    UIButton *_button;
}

@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak DUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CMHeaderPostpartumViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMHeaderPostpartumModel *model; // @synthesize model=_model;
@property(nonatomic) long long modelType; // @synthesize modelType;
- (void).cxx_destruct;
- (void)didClickedButton:(id)arg1;
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

