//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NVModelBaseZeusProductBookingInfoItem, UILabel, UIView;

@interface HotelZeusPackageInfoPickDateItemCell : UICollectionViewCell
{
    UIView *_shadowLineView;
    UILabel *_weekLabel;
    UILabel *_dateLabel;
    NVModelBaseZeusProductBookingInfoItem *_bookingInfo;
}

+ (id)getDateStrForDate:(double)arg1;
+ (_Bool)isToday:(id)arg1;
+ (id)getWeekDayFordate:(double)arg1;
@property(retain, nonatomic) NVModelBaseZeusProductBookingInfoItem *bookingInfo; // @synthesize bookingInfo=_bookingInfo;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *weekLabel; // @synthesize weekLabel=_weekLabel;
@property(retain, nonatomic) UIView *shadowLineView; // @synthesize shadowLineView=_shadowLineView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)setupUI;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDataWith:(id)arg1;

@end

