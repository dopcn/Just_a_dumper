//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIColor, UILabel;
@protocol HUHorizonSwitchViewDataSource;

@interface HUHorizonSwitchView : UIView
{
    int _selectedIndex;
    id <HUHorizonSwitchViewDataSource> _dataSource;
    NSArray *_titlesArray;
    UIColor *_color;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *titlesArray; // @synthesize titlesArray=_titlesArray;
@property(nonatomic) __weak id <HUHorizonSwitchViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)checkEnable;
- (void)transToRight;
- (void)transToLeft;
- (void)setBackgroundAndBorderColor:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (void)prepareView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

