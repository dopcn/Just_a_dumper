//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTableViewCell.h"

@class TBImageView, UILabel;

@interface TBBExchangeDealInfoCell : TBTableViewCell
{
    TBImageView *_dealImg;
    UILabel *_dealName;
    UILabel *_price;
    UILabel *_sellCount;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) __weak UILabel *sellCount; // @synthesize sellCount=_sellCount;
@property(nonatomic) __weak UILabel *price; // @synthesize price=_price;
@property(nonatomic) __weak UILabel *dealName; // @synthesize dealName=_dealName;
@property(nonatomic) __weak TBImageView *dealImg; // @synthesize dealImg=_dealImg;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

