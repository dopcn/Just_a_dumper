//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface WINavigationBar : UIView
{
    UIButton *_leftItem;
    UIButton *_rightItem;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIButton *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIButton *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;

@end

