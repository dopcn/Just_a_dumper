//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AWCoverTKProgressBarView : UIView
{
    int _style;
    float _progress;
    float _displayProgress;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 borderRadius:(double)arg2 borderWidth:(double)arg3 barRadius:(double)arg4 barInset:(double)arg5;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)_updateProgress;
- (id)initWithStyle:(int)arg1;

@end

