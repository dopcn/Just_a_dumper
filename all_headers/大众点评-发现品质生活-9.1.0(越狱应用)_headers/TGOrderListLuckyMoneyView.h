//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NVHorizontalLine, NVImageView, NVJsonLabel, NVModelBaseLuckyMoney, TGBaseView, UIButton;

@interface TGOrderListLuckyMoneyView : UIView
{
    NVModelBaseLuckyMoney *_luckyMoney;
    TGBaseView *_contentView;
    NVImageView *_iconForLuckyMoney;
    NVJsonLabel *_labelForTitle;
    UIButton *_buttonForSendLuckyMoney;
    NVHorizontalLine *_lineForTopSeperate;
}

@property(retain, nonatomic) NVHorizontalLine *lineForTopSeperate; // @synthesize lineForTopSeperate=_lineForTopSeperate;
@property(retain, nonatomic) UIButton *buttonForSendLuckyMoney; // @synthesize buttonForSendLuckyMoney=_buttonForSendLuckyMoney;
@property(retain, nonatomic) NVJsonLabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) NVImageView *iconForLuckyMoney; // @synthesize iconForLuckyMoney=_iconForLuckyMoney;
@property(retain, nonatomic) TGBaseView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NVModelBaseLuckyMoney *luckyMoney; // @synthesize luckyMoney=_luckyMoney;
- (void).cxx_destruct;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sendLuckyMoney:(id)arg1;

@end

