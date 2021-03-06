//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView, UIViewController;

@interface QLAppSubViewCtlPresenter : NSObject
{
    UIView *_subContentBgView;
    UIView *_subContentView;
    UIViewController *_curSubContentCtl;
    double _panelStartY;
}

+ (void)dissmissSubViewController:(_Bool)arg1;
+ (void)viewWillAppearCurSubCtl;
+ (void)presentSubViewController:(id)arg1 animated:(_Bool)arg2 withInterval:(double)arg3;
+ (void)presentSubViewController:(id)arg1 animated:(_Bool)arg2;
+ (void)presentSubViewController:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) double panelStartY; // @synthesize panelStartY=_panelStartY;
@property(retain, nonatomic) UIViewController *curSubContentCtl; // @synthesize curSubContentCtl=_curSubContentCtl;
- (void).cxx_destruct;
- (void)dissmissSubViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doDissmissSubViewController:(id)arg1;
- (void)doPresentSubViewController:(id)arg1 father:(id)arg2 height:(double)arg3;
- (void)doPresentSubViewController:(id)arg1 father:(id)arg2 height:(double)arg3 withInterval:(double)arg4;
- (void)panDown:(id)arg1;
- (_Bool)isPresenting;
- (id)init;

@end

