//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface FuturesTransactionTableViewCell : UITableViewCell
{
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UILabel *_volLabel;
    UILabel *_kaiPingLabel;
    UILabel *_zengCangLabel;
    double _cellWidth;
    UIView *_backGroundView;
}

@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UILabel *zengCangLabel; // @synthesize zengCangLabel=_zengCangLabel;
@property(retain, nonatomic) UILabel *kaiPingLabel; // @synthesize kaiPingLabel=_kaiPingLabel;
@property(retain, nonatomic) UILabel *volLabel; // @synthesize volLabel=_volLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)makeConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andCellWidth:(double)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

