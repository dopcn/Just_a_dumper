//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class QYOfflineHDControlBar;

@interface QYUPadOfflineViewController : UIViewController
{
    QYOfflineHDControlBar *_offlineBar;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) QYOfflineHDControlBar *offlineBar; // @synthesize offlineBar=_offlineBar;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1;

@end

