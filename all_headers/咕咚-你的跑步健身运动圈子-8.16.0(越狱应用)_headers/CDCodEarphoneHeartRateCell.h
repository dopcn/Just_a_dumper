//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDTableViewCell.h"

@class UILabel;

@interface CDCodEarphoneHeartRateCell : CDTableViewCell
{
    UILabel *_heartRateAreaLabel;
    UILabel *_heartRateNameLabel;
}

@property(nonatomic) __weak UILabel *heartRateNameLabel; // @synthesize heartRateNameLabel=_heartRateNameLabel;
@property(nonatomic) __weak UILabel *heartRateAreaLabel; // @synthesize heartRateAreaLabel=_heartRateAreaLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadData:(id)arg1;
- (void)awakeFromNib;

@end

