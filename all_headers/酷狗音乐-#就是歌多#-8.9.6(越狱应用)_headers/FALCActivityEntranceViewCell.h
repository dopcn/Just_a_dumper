//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface FALCActivityEntranceViewCell : UITableViewCell
{
    _Bool _isFull;
    UIImageView *_headImg;
    UILabel *_titleLab;
    UILabel *_descLab;
    UIImageView *_rightArrowView;
    UIView *_numView;
    UILabel *_numLab;
    UIView *_redView;
    UIView *_lineView;
}

@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) UILabel *numLab; // @synthesize numLab=_numLab;
@property(retain, nonatomic) UIView *numView; // @synthesize numView=_numView;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *descLab; // @synthesize descLab=_descLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *headImg; // @synthesize headImg=_headImg;
- (void).cxx_destruct;
- (void)updateBadgeNum:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadInfoWithModel:(id)arg1;
- (void)configSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 FullScreen:(_Bool)arg3;

@end

