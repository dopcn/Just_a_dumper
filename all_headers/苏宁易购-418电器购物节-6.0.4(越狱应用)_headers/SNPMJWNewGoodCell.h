//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMJWCommonCell.h"

#import "SNUIImageViewExDelegate-Protocol.h"

@class NSMutableArray, NSString, SNUIImageViewEx, UIImageView, UILabel;

@interface SNPMJWNewGoodCell : SNPMJWCommonCell <SNUIImageViewExDelegate>
{
    UIImageView *_bgImg;
    UILabel *_titleLab;
    UILabel *_subTitleLab;
    NSMutableArray *_goodsArr;
    SNUIImageViewEx *_bottomImg;
}

+ (double)cellHeight;
@property(retain, nonatomic) SNUIImageViewEx *bottomImg; // @synthesize bottomImg=_bottomImg;
@property(retain, nonatomic) NSMutableArray *goodsArr; // @synthesize goodsArr=_goodsArr;
@property(retain, nonatomic) UILabel *subTitleLab; // @synthesize subTitleLab=_subTitleLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *bgImg; // @synthesize bgImg=_bgImg;
- (void).cxx_destruct;
- (void)imageExViewDidOk:(id)arg1;
- (void)updateWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

