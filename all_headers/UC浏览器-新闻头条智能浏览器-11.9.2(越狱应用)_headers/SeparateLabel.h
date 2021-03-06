//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface SeparateLabel : UIView
{
    int _separateSpace;
    UILabel *_textLabel;
    UIColor *_separateColor;
    UIImageView *_refreshButton;
    long long _labelType;
}

@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) UIImageView *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIColor *separateColor; // @synthesize separateColor=_separateColor;
@property(nonatomic) int separateSpace; // @synthesize separateSpace=_separateSpace;
@property(readonly, retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (struct CGSize)refreshButtonSize;
- (void)createTextLabel;
- (void)createRefreshButton;
- (void)adjustSubviews;
- (void)layoutSubviews;
- (void)setRefreshType:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withRefreshType:(long long)arg2;

@end

