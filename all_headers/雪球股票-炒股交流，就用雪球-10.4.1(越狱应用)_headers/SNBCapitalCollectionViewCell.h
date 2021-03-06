//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDecimalNumber, NSString, UILabel;

@interface SNBCapitalCollectionViewCell : UICollectionViewCell
{
    NSString *_indName;
    NSDecimalNumber *_percent;
    UILabel *_titleLabel;
    UILabel *_stockLabel;
}

@property(nonatomic) __weak UILabel *stockLabel; // @synthesize stockLabel=_stockLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDecimalNumber *percent; // @synthesize percent=_percent;
@property(copy, nonatomic) NSString *indName; // @synthesize indName=_indName;
- (void).cxx_destruct;
- (void)updateTheme:(_Bool)arg1;
- (void)_snb_stockCapitalPercent:(id)arg1;
- (void)_snb_configureObservers;
- (void)_snb_configSubview;
- (void)awakeFromNib;

@end

