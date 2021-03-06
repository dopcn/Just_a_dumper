//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YKFBlockDelegate-Protocol.h"
#import "YKFReactiveView-Protocol.h"

@class CALayer, NSString, YKFTableViewBlocksCellVM;

@interface YKFTableViewBlocksCell : UITableViewCell <YKFReactiveView, YKFBlockDelegate>
{
    YKFTableViewBlocksCellVM *_blocksCellVM;
    CALayer *_separatorLayer;
    NSString *_pageName;
    NSString *_spmA;
    NSString *_spmB;
    NSString *_spmC;
    NSString *_spmD;
    NSString *_exposeEventName;
    NSString *_selectControlName;
    struct UIEdgeInsets _contentInsets;
}

+ (struct CGRect)drawFrameWithExpectFrame:(struct CGRect)arg1 contentInsets:(struct UIEdgeInsets)arg2;
+ (double)perfectHeightWithViewModel:(id)arg1 width:(double)arg2;
@property(copy, nonatomic) NSString *selectControlName; // @synthesize selectControlName=_selectControlName;
@property(copy, nonatomic) NSString *exposeEventName; // @synthesize exposeEventName=_exposeEventName;
@property(copy, nonatomic) NSString *spmD; // @synthesize spmD=_spmD;
@property(copy, nonatomic) NSString *spmC; // @synthesize spmC=_spmC;
@property(copy, nonatomic) NSString *spmB; // @synthesize spmB=_spmB;
@property(copy, nonatomic) NSString *spmA; // @synthesize spmA=_spmA;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(retain, nonatomic) YKFTableViewBlocksCellVM *blocksCellVM; // @synthesize blocksCellVM=_blocksCellVM;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect drawFrame;
- (void)handleEnterDetailAction;
- (void)handleTrackActionWithCtrlName:(id)arg1 spmD:(id)arg2;
- (void)trackDataWhenSelectedCell;
- (void)trackDataWhenDisplayingCell;
- (id)spm;
- (void)laytoutBlocks;
- (void)contentViewRemoveBlocks:(id)arg1;
- (void)contentViewRemoveBlock:(id)arg1;
- (void)contentViewAddBlocks:(id)arg1;
- (void)contentViewAddBlock:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

