//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNTopWindowRootViewController.h"

@class BNDriveTestMenuViewDelegate, BNDriveTestMenuWindow, BNDriveTestToolbar;

@interface BNDriveTestMenuViewController : BNTopWindowRootViewController
{
    _Bool _isToolbarOpen;
    BNDriveTestMenuWindow *_window;
    BNDriveTestToolbar *_toolbar;
    BNDriveTestMenuViewDelegate *_toolbarDelegate;
}

@property(retain, nonatomic) BNDriveTestMenuViewDelegate *toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
@property(retain, nonatomic) BNDriveTestToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak BNDriveTestMenuWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (struct CGRect)toolbarFrame;
- (void)closeToolbarWithCompletion:(CDUnknownBlockType)arg1;
- (void)openToolbarWithCompletion:(CDUnknownBlockType)arg1;
- (void)openToolbar;
- (void)reshow;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

