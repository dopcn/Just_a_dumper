//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol VSLocationViewDelegate;

@interface VSLocationView : UIView
{
    UIButton *_provinceButton;
    UIButton *_cityButton;
    UIButton *_districtButton;
    UIButton *_streetButton;
    id <VSLocationViewDelegate> _delegate;
    UIView *_underLine;
}

@property(retain, nonatomic) UIView *underLine; // @synthesize underLine=_underLine;
@property(nonatomic) __weak id <VSLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *streetButton; // @synthesize streetButton=_streetButton;
@property(retain, nonatomic) UIButton *districtButton; // @synthesize districtButton=_districtButton;
@property(retain, nonatomic) UIButton *cityButton; // @synthesize cityButton=_cityButton;
@property(retain, nonatomic) UIButton *provinceButton; // @synthesize provinceButton=_provinceButton;
- (void).cxx_destruct;
- (void)clickAction:(id)arg1;
- (void)selectButton:(int)arg1;
- (void)resetDistrict;
- (void)resetCity;
- (void)resetProvince;
- (void)setUpView:(int)arg1;

@end

