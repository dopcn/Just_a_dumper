//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RPWelfareTagView, UILabel;

@interface RPBRegularClassifyTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    RPWelfareTagView *_welfareView;
    UILabel *_yearRateLabel;
    UILabel *_divideLabel;
    UILabel *_leftValueLabel;
    UILabel *_soldOutLabel;
}

@property(retain, nonatomic) UILabel *soldOutLabel; // @synthesize soldOutLabel=_soldOutLabel;
@property(retain, nonatomic) UILabel *leftValueLabel; // @synthesize leftValueLabel=_leftValueLabel;
@property(retain, nonatomic) UILabel *divideLabel; // @synthesize divideLabel=_divideLabel;
@property(retain, nonatomic) UILabel *yearRateLabel; // @synthesize yearRateLabel=_yearRateLabel;
@property(retain, nonatomic) RPWelfareTagView *welfareView; // @synthesize welfareView=_welfareView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setWithData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

