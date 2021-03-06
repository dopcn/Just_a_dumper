//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttCommonTableViewCell.h"

#import "UITableViewPullImageDelegate-Protocol.h"

@class MCMsgModel, MCUserModel, MttMCContainerView, NSMutableArray, NSString, UIHomePageImageView, UIView;

@interface MttMCLetterBaseCell : MttCommonTableViewCell <UITableViewPullImageDelegate>
{
    NSMutableArray *_imageOperations;
    UIHomePageImageView *_iconImageView;
    UIView *_container;
    MttMCContainerView *_wrapper;
    MCMsgModel *_model;
    MCUserModel *_sender;
    long long _flag;
}

+ (id)defaultStyle;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) MCUserModel *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) MCMsgModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MttMCContainerView *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIHomePageImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSMutableArray *imageOperations; // @synthesize imageOperations=_imageOperations;
- (void).cxx_destruct;
- (id)colorByType:(long long)arg1;
- (void)clickHead;
- (id)iconUrl;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isSelfSender;
- (void)setupConstraints;
- (void)clearData;
- (void)prepareForReuse;
- (void)setupView;
- (void)refreshSkinWithMode:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

