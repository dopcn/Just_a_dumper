//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "View.h"

@class NSMutableArray, NSString;
@protocol XWScoreViewDelegate;

@interface XWScoreView : View
{
    id <XWScoreViewDelegate> _deledage;
    NSString *_iconName;
    NSString *_iconSelectedName;
    NSMutableArray *_starsArray;
    struct CGRect _iconFrame;
}

@property(retain, nonatomic) NSMutableArray *starsArray; // @synthesize starsArray=_starsArray;
@property(retain, nonatomic) NSString *iconSelectedName; // @synthesize iconSelectedName=_iconSelectedName;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
@property(nonatomic) __weak id <XWScoreViewDelegate> deledage; // @synthesize deledage=_deledage;
- (void).cxx_destruct;
- (void)hitStar:(id)arg1;
- (void)configStarsImage;
- (double)height;
- (double)width;
- (id)initWithIconFrame:(struct CGRect)arg1 picName:(id)arg2 picSelectedName:(id)arg3;

@end

