//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAUIViewController.h"

#import "BBAPixelSearchEntranceViewControllerDelegate-Protocol.h"

@class BBACameraViewController, BBAPixelSearchEntranceViewController, BBAPixelSearchMainViewController, BBAPixelSearchModalViewController, NSString;

@interface BBAPixelSearchViewController : BBAUIViewController <BBAPixelSearchEntranceViewControllerDelegate>
{
    _Bool _shouldAnimateWhenExit;
    unsigned long long _status;
    NSString *_searchType;
    BBACameraViewController *_cameraVC;
    BBAPixelSearchEntranceViewController *_entranceViewController;
    BBAPixelSearchModalViewController *_modalVC;
    BBAPixelSearchMainViewController *_mainViewController;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool shouldAnimateWhenExit; // @synthesize shouldAnimateWhenExit=_shouldAnimateWhenExit;
@property(retain, nonatomic) BBAPixelSearchMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) BBAPixelSearchModalViewController *modalVC; // @synthesize modalVC=_modalVC;
@property(retain, nonatomic) BBAPixelSearchEntranceViewController *entranceViewController; // @synthesize entranceViewController=_entranceViewController;
@property(retain, nonatomic) BBACameraViewController *cameraVC; // @synthesize cameraVC=_cameraVC;
@property(retain, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)onExitButtonClick:(id)arg1;
- (void)entranceVC:(id)arg1 didSelectSearchType:(id)arg2;
- (void)exitMainSearch;
- (void)exitPixelSearchAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeStatusBar:(long long)arg1;
- (void)showAlertView;
- (void)showMainView;
- (void)startCapture;
- (void)removeEntranceView;
- (void)didBecomeActive:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadEntranceVC;
- (void)loadView;
- (void)dealloc;
- (void)clean;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSearchType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

