//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ExchangeCenterModel, ExchangeListViewController, TTTAttributedLabel, UIButton, UIImageView, UILabel;

@interface ExchangeCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imgBackground;
    UIButton *_btnBackground;
    UILabel *_lblFlag;
    UIImageView *_imgMain;
    TTTAttributedLabel *_lblTitle;
    UILabel *_lblPoints;
    UILabel *_lblExchange;
    ExchangeListViewController *_fatherVC;
    ExchangeCenterModel *_model;
    long long _exchangeType;
}

@property(nonatomic) long long exchangeType; // @synthesize exchangeType=_exchangeType;
@property(retain, nonatomic) ExchangeCenterModel *model; // @synthesize model=_model;
@property(retain, nonatomic) ExchangeListViewController *fatherVC; // @synthesize fatherVC=_fatherVC;
@property(retain, nonatomic) UILabel *lblExchange; // @synthesize lblExchange=_lblExchange;
@property(retain, nonatomic) UILabel *lblPoints; // @synthesize lblPoints=_lblPoints;
@property(retain, nonatomic) TTTAttributedLabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UIImageView *imgMain; // @synthesize imgMain=_imgMain;
@property(retain, nonatomic) UILabel *lblFlag; // @synthesize lblFlag=_lblFlag;
@property(retain, nonatomic) UIButton *btnBackground; // @synthesize btnBackground=_btnBackground;
@property(retain, nonatomic) UIImageView *imgBackground; // @synthesize imgBackground=_imgBackground;
- (void).cxx_destruct;
- (void)onItemDetailPress;
- (void)showCellInfo:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

