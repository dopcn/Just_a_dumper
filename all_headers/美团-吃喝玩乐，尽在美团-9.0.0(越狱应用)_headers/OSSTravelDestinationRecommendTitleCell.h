//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVBaseCellProtocol-Protocol.h"

@class NSString, NVModelBaseMTOVChannelDestRecModule, UIImageView, UILabel, UITapGestureRecognizer;

@interface OSSTravelDestinationRecommendTitleCell : UITableViewCell <NVBaseCellProtocol>
{
    CDUnknownBlockType _clickBlock;
    UIImageView *_titleImageView;
    UILabel *_moreLabel;
    UIImageView *_moreImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NVModelBaseMTOVChannelDestRecModule *_cellData;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NVModelBaseMTOVChannelDestRecModule *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)didTapMoreLink:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

