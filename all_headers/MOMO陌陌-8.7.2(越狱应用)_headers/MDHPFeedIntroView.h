//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDDisplayComposedView.h"

@class NSDictionary, UIImageView;

@interface MDHPFeedIntroView : MDDisplayComposedView
{
    UIImageView *_headIconView;
    UIImageView *_sexView;
    NSDictionary *_intro;
}

@property(retain, nonatomic) NSDictionary *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) UIImageView *sexView; // @synthesize sexView=_sexView;
@property(retain, nonatomic) UIImageView *headIconView; // @synthesize headIconView=_headIconView;
- (void).cxx_destruct;
- (void)decorateHPFeedIntro:(id)arg1;
- (void)updateWithNode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

