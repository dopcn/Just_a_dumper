//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttMessageBoxView.h"

@class MttCartoonLoadingView, NSDate;

@interface MttCartoonAlertLoadingView : MttMessageBoxView
{
    _Bool _shouldShow;
    MttCartoonLoadingView *_loadingView;
    NSDate *_showTime;
}

@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(retain, nonatomic) NSDate *showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) MttCartoonLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)smartDismiss;
- (void)delayShow;
- (id)init;

@end

