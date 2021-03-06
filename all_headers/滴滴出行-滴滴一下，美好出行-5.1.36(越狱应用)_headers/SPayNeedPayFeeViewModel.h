//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface SPayNeedPayFeeViewModel : NSObject
{
    NSString *_priceText;
    UIColor *_priceTextColor;
    NSString *_leftText;
    UIColor *_leftTextColor;
    NSString *_rightText;
    UIColor *_rightTextColor;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIColor *rightTextColor; // @synthesize rightTextColor=_rightTextColor;
@property(copy, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) UIColor *leftTextColor; // @synthesize leftTextColor=_leftTextColor;
@property(copy, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
@property(retain, nonatomic) UIColor *priceTextColor; // @synthesize priceTextColor=_priceTextColor;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
- (void).cxx_destruct;

@end

