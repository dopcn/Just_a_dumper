//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMBaseTableCell.h"

@class SMSearchCateTopView, TTTAttributedLabel, UIImageView, UILabel, UIView;

@interface ZDMView_130 : SMBaseTableCell
{
    UIView *_vContain;
    UIImageView *_imgvFocus;
    TTTAttributedLabel *_lblTitle;
    UILabel *_rs_button;
    SMSearchCateTopView *_view_left;
    SMSearchCateTopView *_view_center;
    SMSearchCateTopView *_view_right;
}

@property(retain, nonatomic) SMSearchCateTopView *view_right; // @synthesize view_right=_view_right;
@property(retain, nonatomic) SMSearchCateTopView *view_center; // @synthesize view_center=_view_center;
@property(retain, nonatomic) SMSearchCateTopView *view_left; // @synthesize view_left=_view_left;
@property(retain, nonatomic) UILabel *rs_button; // @synthesize rs_button=_rs_button;
@property(retain, nonatomic) TTTAttributedLabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UIImageView *imgvFocus; // @synthesize imgvFocus=_imgvFocus;
@property(retain, nonatomic) UIView *vContain; // @synthesize vContain=_vContain;
- (void).cxx_destruct;
- (void)isYetBrowse;
- (void)setupHasBrowsing;
- (void)setSearchDataDic:(id)arg1;
- (void)sm_resize;
- (void)setDataDic:(id)arg1;
- (void)commonInit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

