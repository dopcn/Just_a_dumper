//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, SPActivityIndicatorView, UIImageView;

@interface QYCustomButton : UIButton
{
    _Bool _loading;
    UIImageView *_leftView;
    NSDictionary *_userInfo;
    SPActivityIndicatorView *_indicator;
}

+ (id)backgroundImage4Waring;
+ (id)backgroundImage4Selected;
+ (id)backgroundImage4Disabled;
+ (id)backgroundImage4Gray;
+ (id)backgroundImage4Normal;
@property(retain, nonatomic) SPActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)setupIndicator;
@property(retain, nonatomic) UIImageView *leftView; // @synthesize leftView=_leftView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

