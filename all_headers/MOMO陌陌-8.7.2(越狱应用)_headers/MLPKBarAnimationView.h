//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MLPKBarAnimationView : UIView
{
    NSArray *_colors;
}

+ (id)pkBarAnimationViewWithFrame:(struct CGRect)arg1 colors:(id)arg2;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (id)progressViewWithColor:(id)arg1 position:(struct CGPoint)arg2;
- (void)startAnimation;

@end

