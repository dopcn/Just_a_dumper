//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMBaseTableCell.h"

@class TTTAttributedLabel, UIImageView, UIView;

@interface SM_KaPian_G1_Cell : SMBaseTableCell
{
    UIView *_viewContainer;
    UIImageView *_imageView_Focus;
    TTTAttributedLabel *_labelTitle;
    TTTAttributedLabel *_labelBrief;
}

@property(retain, nonatomic) TTTAttributedLabel *labelBrief; // @synthesize labelBrief=_labelBrief;
@property(retain, nonatomic) TTTAttributedLabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIImageView *imageView_Focus; // @synthesize imageView_Focus=_imageView_Focus;
@property(retain, nonatomic) UIView *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void).cxx_destruct;
- (void)isYetBrowse;
- (void)setupHasBrowsing;
- (void)sm_resize;
- (void)setDataDic:(id)arg1;
- (void)sm_setupView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

