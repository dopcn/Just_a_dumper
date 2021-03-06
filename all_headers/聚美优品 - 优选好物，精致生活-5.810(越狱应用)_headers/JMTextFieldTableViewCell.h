//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UITextField, UIView;

@interface JMTextFieldTableViewCell : UITableViewCell
{
    UITextField *_contentTextField;
    UIButton *_rightButton;
    double _leftMargin;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UITextField *contentTextField; // @synthesize contentTextField=_contentTextField;
- (void).cxx_destruct;
- (void)createRightButtonIfNo;
- (void)createContentTextFieldIfNo;
- (void)creatLIineIfNo;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 frameWidth:(double)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

