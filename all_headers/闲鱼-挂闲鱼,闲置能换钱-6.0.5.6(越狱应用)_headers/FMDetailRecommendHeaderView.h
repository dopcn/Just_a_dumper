//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FMImageView, UILabel, UIView;

@interface FMDetailRecommendHeaderView : UITableViewCell
{
    UIView *_leftLine;
    UIView *_rightLine;
    FMImageView *_leftSplit;
    FMImageView *_rightSplit;
    UILabel *_contentLabel;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) FMImageView *rightSplit; // @synthesize rightSplit=_rightSplit;
@property(retain, nonatomic) FMImageView *leftSplit; // @synthesize leftSplit=_leftSplit;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)updateConstraints;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

