//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface RPBRegularWelfareTableViewCell : UITableViewCell
{
    UIView *_backContentView;
    UIView *_bottomBackView;
    UIView *_rightDetailView;
    NSLayoutConstraint *_rightViewHeight;
    UILabel *_ratesLabel;
    UILabel *_couponDaysLabel;
    UILabel *_couponTitleLabel;
    UILabel *_couponTypeLabel;
    UILabel *_timeEndTipLabel;
    UIImageView *_selectView;
}

+ (double)cellHeightWithData:(id)arg1;
@property(nonatomic) __weak UIImageView *selectView; // @synthesize selectView=_selectView;
@property(nonatomic) __weak UILabel *timeEndTipLabel; // @synthesize timeEndTipLabel=_timeEndTipLabel;
@property(nonatomic) __weak UILabel *couponTypeLabel; // @synthesize couponTypeLabel=_couponTypeLabel;
@property(nonatomic) __weak UILabel *couponTitleLabel; // @synthesize couponTitleLabel=_couponTitleLabel;
@property(nonatomic) __weak UILabel *couponDaysLabel; // @synthesize couponDaysLabel=_couponDaysLabel;
@property(nonatomic) __weak UILabel *ratesLabel; // @synthesize ratesLabel=_ratesLabel;
@property(nonatomic) __weak NSLayoutConstraint *rightViewHeight; // @synthesize rightViewHeight=_rightViewHeight;
@property(nonatomic) __weak UIView *rightDetailView; // @synthesize rightDetailView=_rightDetailView;
@property(nonatomic) __weak UIView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(nonatomic) __weak UIView *backContentView; // @synthesize backContentView=_backContentView;
- (void).cxx_destruct;
- (void)cellForData:(id)arg1 selected:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

