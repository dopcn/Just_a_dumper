//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJGCBaseViewController.h"

@class GJGCDefaultBlankView, UIView;
@protocol GJGCCircleBlankViewProtocol;

@interface GJGCCircleBlankViewController : GJGCBaseViewController
{
    id <GJGCCircleBlankViewProtocol> _blankViewChild;
    GJGCDefaultBlankView *_blankView;
    UIView *_blankBackgroudView;
}

@property(retain, nonatomic) UIView *blankBackgroudView; // @synthesize blankBackgroudView=_blankBackgroudView;
@property(retain, nonatomic) GJGCDefaultBlankView *blankView; // @synthesize blankView=_blankView;
@property(nonatomic) __weak id <GJGCCircleBlankViewProtocol> blankViewChild; // @synthesize blankViewChild=_blankViewChild;
- (void).cxx_destruct;
- (void)blankViewBtnAction:(id)arg1;
- (void)hideBlankView;
- (void)showBlankViewWithType:(unsigned long long)arg1 picType:(unsigned long long)arg2 title:(id)arg3 btnTitle:(id)arg4;
- (void)didReceiveMemoryWarning;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)init;

@end

