//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseCell.h"

@class NVJsonLabel, UILabel;

@interface HotelBookingInfoOrderDetailCell : TGBaseCell
{
    UILabel *_labelForDate;
    UILabel *_labelForInfo;
    NVJsonLabel *_labelForStatus;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NVJsonLabel *labelForStatus; // @synthesize labelForStatus=_labelForStatus;
@property(retain, nonatomic) UILabel *labelForInfo; // @synthesize labelForInfo=_labelForInfo;
@property(retain, nonatomic) UILabel *labelForDate; // @synthesize labelForDate=_labelForDate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)initViews;
- (id)init;
- (void)awakeFromNib;

@end

