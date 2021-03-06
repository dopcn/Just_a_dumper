//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FollowManageBaseCell.h"

@class TTTAttributedLabel, UILabel, UIView;

@interface FollowManageArticleCell : FollowManageBaseCell
{
    UILabel *_titleLabel;
    UILabel *_tagLabel;
    TTTAttributedLabel *_contentLabel;
    UIView *_titleContanerView;
}

@property(nonatomic) __weak UIView *titleContanerView; // @synthesize titleContanerView=_titleContanerView;
@property(retain, nonatomic) TTTAttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)rightButtons;
- (void)resize;
- (void)setCellDict:(id)arg1;
- (void)awakeFromNib;

@end

