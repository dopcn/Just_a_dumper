//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTDestWriteTravelRootCell.h"

@class CTImageView, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface CTDestWriteTravelTableViewCell : CTDestWriteTravelRootCell
{
    UIScrollView *_bgScrollView;
    UIButton *_delBtn;
    UIButton *_addBtn;
    CTImageView *_photoView;
    UILabel *_descLabel;
    UIButton *_descBtn;
    UIView *_bgView;
    UILabel *_coverLabel;
    UIView *_videoBgView;
    UIImageView *_videoTypeImageView;
    UILabel *_videoTimeLabel;
}

@property(retain, nonatomic) UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
@property(retain, nonatomic) UIImageView *videoTypeImageView; // @synthesize videoTypeImageView=_videoTypeImageView;
@property(retain, nonatomic) UIView *videoBgView; // @synthesize videoBgView=_videoBgView;
@property(retain, nonatomic) UILabel *coverLabel; // @synthesize coverLabel=_coverLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *descBtn; // @synthesize descBtn=_descBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) CTImageView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
- (void).cxx_destruct;
- (void)descLabelHeight:(id)arg1;
- (void)singleClickImage;
- (void)singleClickDescLabel;
- (struct CGRect)rectForCellContentToView:(id)arg1;
- (id)prepareForMoveSnapshot;
- (void)prepareForMove;
- (void)fillCellContentWith:(id)arg1 status:(int)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

