//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface OSSPlayingIntroduceCell : UITableViewCell
{
    UIImageView *_introductionImage;
    UILabel *_introductionLable;
}

+ (double)cellHeight:(id)arg1;
+ (double)introductionHeight:(id)arg1;
@property(retain, nonatomic) UILabel *introductionLable; // @synthesize introductionLable=_introductionLable;
@property(retain, nonatomic) UIImageView *introductionImage; // @synthesize introductionImage=_introductionImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)renderCellWithData:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

