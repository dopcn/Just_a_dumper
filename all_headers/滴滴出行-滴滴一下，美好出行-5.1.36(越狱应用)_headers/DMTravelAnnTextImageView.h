//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DMTravelStrokeLabel, UIImageView;

@interface DMTravelAnnTextImageView : UIView
{
    UIImageView *_startImage;
    DMTravelStrokeLabel *_textLabel;
}

@property(retain, nonatomic) DMTravelStrokeLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *startImage; // @synthesize startImage=_startImage;
- (void).cxx_destruct;
- (void)setLabel:(id)arg1 withLineSpace:(long long)arg2 withString:(id)arg3;
- (struct CGPoint)anchorPoint;
- (id)initWithImage:(id)arg1 displayName:(id)arg2;

@end

