//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TransactionDetailHeaderView : UIView
{
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UILabel *_handLabel;
    double _headerWidth;
}

@property(nonatomic) double headerWidth; // @synthesize headerWidth=_headerWidth;
@property(retain, nonatomic) UILabel *handLabel; // @synthesize handLabel=_handLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)makeConstraints;
- (id)initWithWidth:(double)arg1;

@end

