//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class PhotoContentView;

@interface PhotoScrollView : UIScrollView
{
    PhotoContentView *_photoContentView;
}

@property(retain, nonatomic) PhotoContentView *photoContentView; // @synthesize photoContentView=_photoContentView;
- (void).cxx_destruct;
- (double)realScale;
- (void)setContentOffsetX:(double)arg1;
- (void)setContentOffsetY:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

