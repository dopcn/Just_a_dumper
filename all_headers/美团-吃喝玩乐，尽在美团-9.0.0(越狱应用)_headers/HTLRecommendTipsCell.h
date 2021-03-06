//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewCell.h"

#import "NVBaseCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface HTLRecommendTipsCell : MTTableViewCell <NVBaseCellProtocol>
{
    UILabel *_tipsLabel;
    UIImageView *_tipImageView;
    UIView *_containerView;
    UIImageView *_topSeparateLineView;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *topSeparateLineView; // @synthesize topSeparateLineView=_topSeparateLineView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

