//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor;

@interface QYUReservationButton : UIButton
{
    _Bool _isReservedState;
    UIColor *_colorReservedState;
    UIColor *_colorUnreservedState;
    NSString *_titleReservedState;
    NSString *_titleUnreservedState;
    NSString *_iconReservedState;
    NSString *_iconUnreservedState;
    double _fontSize;
    double _gapIconText;
}

@property(nonatomic) _Bool isReservedState; // @synthesize isReservedState=_isReservedState;
@property(nonatomic) double gapIconText; // @synthesize gapIconText=_gapIconText;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *iconUnreservedState; // @synthesize iconUnreservedState=_iconUnreservedState;
@property(retain, nonatomic) NSString *iconReservedState; // @synthesize iconReservedState=_iconReservedState;
@property(retain, nonatomic) NSString *titleUnreservedState; // @synthesize titleUnreservedState=_titleUnreservedState;
@property(retain, nonatomic) NSString *titleReservedState; // @synthesize titleReservedState=_titleReservedState;
@property(retain, nonatomic) UIColor *colorUnreservedState; // @synthesize colorUnreservedState=_colorUnreservedState;
@property(retain, nonatomic) UIColor *colorReservedState; // @synthesize colorReservedState=_colorReservedState;
- (void).cxx_destruct;
- (void)p_update;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)calcIconTextByRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

