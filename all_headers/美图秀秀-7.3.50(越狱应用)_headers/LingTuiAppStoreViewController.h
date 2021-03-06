//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString;
@protocol LingTuiAppStoreViewControllerDelegate;

@interface LingTuiAppStoreViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    _Bool _clearvc;
    id <LingTuiAppStoreViewControllerDelegate> delegate;
}

@property(nonatomic) _Bool clearvc; // @synthesize clearvc=_clearvc;
@property(nonatomic) id <LingTuiAppStoreViewControllerDelegate> delegate; // @synthesize delegate;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)showAppStore:(id)arg1 withViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

