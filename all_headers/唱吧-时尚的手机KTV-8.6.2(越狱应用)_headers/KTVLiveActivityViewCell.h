//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVSimpleTableViewCell.h"

@class KTVImageView, NSLayoutConstraint, UIButton, UILabel;

@interface KTVLiveActivityViewCell : KTVSimpleTableViewCell
{
    KTVImageView *_roomImageView;
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_roomIDLabel;
    UIButton *_subscribeButton;
    NSLayoutConstraint *_subscribeButtonWidthConstraint;
}

+ (id)heightForModel:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *subscribeButtonWidthConstraint; // @synthesize subscribeButtonWidthConstraint=_subscribeButtonWidthConstraint;
@property(nonatomic) __weak UIButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(nonatomic) __weak UILabel *roomIDLabel; // @synthesize roomIDLabel=_roomIDLabel;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(nonatomic) __weak UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(nonatomic) __weak KTVImageView *roomImageView; // @synthesize roomImageView=_roomImageView;
- (void).cxx_destruct;
- (void)subscribeButtonClick:(id)arg1;
- (void)reloadData;

@end

