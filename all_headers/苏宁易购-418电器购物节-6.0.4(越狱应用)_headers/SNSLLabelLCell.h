//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface SNSLLabelLCell : UITableViewCell
{
    UILabel *_leftLbl;
    UILabel *_rightLbl;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *rightLbl; // @synthesize rightLbl=_rightLbl;
@property(retain, nonatomic) UILabel *leftLbl; // @synthesize leftLbl=_leftLbl;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setUpContentWithLeftText:(id)arg1 rightText:(id)arg2 bottomLineType:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

